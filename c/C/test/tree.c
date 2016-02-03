/* tree.c -- 数类型的支持函数 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.h"

/* 局部数据类型 */
typedef struct pair
{
	Node * parent;
	Node * child;
}Pair;

/* 局部函数声明 */
static Node * MakeNode(const Item * pi);
static int ToLeft(const Item * i1, const Item * i2);
static int ToRight(const Item * i1, const Item * i2);
static void AddNode(Node * new_node, Node * root);
static Pair SeekItem(const Item * pi, const Tree * ptree);
static void DeleteNode(Node ** ptr);
static void DeleteAllNodes(Node * root);
static void InOrder(const Node * root,void(* pfun)(Item item));


void InitializeTree(Tree * ptree)
{
	ptree->root = NULL;
	ptree->size = 0;
}

int TreeIsEmpty(const Tree * ptree)
{
	if (ptree->size == 0)
		return TRUE;
	else
		return FALSE;
}

int TreeIsFull(const Tree * ptree)
{
	if (ptree->size == MAXITEMS)
		return TRUE;
	else
		return FALSE;
}

int TreeItemCount(const Tree * ptree)
{
	return ptree->size;
}

int AddItem(const Item * pi, Tree * ptree)
{
	Node * new_node;

	if(TreeIsFull(ptree))
	{
		fprintf(stderr,"Tree is full.\n");
		return FALSE;
	}

	if(SeekItem(pi,ptree).child != NULL)
	{
		fprintf(stderr,"Attempt to add duplicate item.\n");
		return FALSE;
	}

	new_node = MakeNode(pi);
	if(new_node == NULL)
	{
		fprintf(stderr,"couldn't create node.\n");
		return FALSE;
	}

	ptree->size++;
	if(ptree->root == NULL)
		ptree->root = new_node;
	else
		AddNode(new_node,ptree->root);
	
	return TRUE; 
}

int InTree(const Item * pi, const Tree * ptree)
{
	if (SeekItem(pi,ptree).child == NULL)
		return FALSE;
	else
		return TRUE;
}

/**
*操作：从树中删除一个项目
*操作前：pi指向一个待删除的项目，ptree指向一个已初始化过的树
*操作后：删除成功返回TRUE，否则返回FALSE
**/
int DeleteItem(const Item * pi,Tree * ptree)
{
	Pair look;
	look = SeekItem(pi,ptree);
	if((look = SeekItem(pi,ptree)).child == NULL)
	{
		fprintf(stderr,"couldn't find the item in the tree.\n");
		return FALSE; 
	}

	else if(look.parent == NULL)
		DeleteNode(&ptree->root);
	else if(look.parent->left == look.child)	
		DeleteNode(&look.parent->left);
	else
		DeleteNode(&look.parent->right);
	ptree->size--;
	
	return TRUE;
}

/*删除给定参数对应的的目标节点*/
static void DeleteNode(Node ** ptr)/*ptr是指向“目标节点的父节点指针成员(left or right)”的地址*/
{
	Node * temp;	/*存储欲删除的节点*/

	/*欲删除节点是叶子节点*/
	if((*ptr)->left == NULL && (*ptr)->right == NULL)
	{
		temp = *ptr;
		*ptr = NULL;
		free(temp);
	}

	/*欲删除节点左子树为空*/
	else if((*ptr)->left == NULL)
	{
		temp = *ptr;
		*ptr = (*ptr)->right;
		free(temp);
	}
	else if((*ptr)->right == NULL)
	{
		temp = *ptr;
		*ptr = (*ptr)->left;
		free(temp);
	}
	else
	{
		for(temp = (*ptr)->left;temp->right != NULL;temp = temp->right)
			continue;
		temp->right = (*ptr)->right;
		temp = *ptr;
		*ptr = (*ptr)->left;
		free(temp);
	}
}
/**
*操作：把一个函数作用于树中的每一个项目
*操作前：ptree指向一个树，pfun指向一个无返回值的函数，该函数接受一个Item参数
*操作后：pfun指向的函数作用于树中的每一个项目一次
**/
void Tracerse(const Tree * ptree, void(* pfun)(Item item))
{
	if(ptree != NULL)
		InOrder(ptree->root,pfun);
}
static void InOrder(const Node * root,void(* pfun)(Item item))
{
	if(root != NULL)
	{
		(*pfun)(root->item);
		InOrder(root->left,pfun);
		InOrder(root->right,pfun);
	}
}

/**
*操作：从树中删除所有节点
*操作前：ptree指向一个已初始化过的树
*操作后：该树为空树
**/
void DeleteAll(Tree * ptree)
{
	if(ptree->root != NULL)
		DeleteAllNodes(ptree->root);
	ptree->root = NULL;
	ptree->size = 0;
}

static void DeleteAllNodes(Node * root)
{
	Node * pright;

	if(root != NULL)
	{
		pright = root->right;
		DeleteAllNodes(root->left);
		free(root);
		DeleteAllNodes(pright);
	}
	
}
static Node * MakeNode(const Item * pi)
{
	Node * new_node;

	new_node = (Node *)malloc(sizeof(Node));
	if(new_node != NULL)
	{
		new_node->item = *pi;
		new_node->left = NULL;
		new_node->right = NULL;
	}
	

	return new_node;
}


static void AddNode(Node * new_node, Node * root)
{
	if(ToLeft(&new_node->item,&root->item))
	{
		if(root->left == NULL)
			root->left = new_node;
		else
			AddNode(new_node,root->left);
	}
	else if(ToRight(&new_node->item,&root->item))
	{
		if(root->right == NULL)
			root->right = new_node;
		else
			AddNode(new_node,root->right);
	}
	else
	{
		fprintf(stderr,"location error in AddNode().\n");
		exit(1);
	}
	
}


static int ToLeft(const Item * i1, const Item * i2)
{
	int compl;
	if((compl = strcmp(i1->petname,i2->petname)) < 0)
		return TRUE;
	else if(compl == 0 && strcmp(i1->petkind,i2->petkind) < 0)
		return TRUE;
	else
		return FALSE;
}

static int ToRight(const Item * i1, const Item * i2)
{
	int compl;
	if((compl = strcmp(i1->petname,i2->petname)) > 0)
		return TRUE;
	else if(compl == 0 && strcmp(i1->petkind,i2->petkind) > 0)
		return TRUE;
	else
		return FALSE;
}

static Pair SeekItem(const Item * pi, const Tree * ptree)
{
	Pair look;
	look.parent = NULL;
	look.child = ptree->root;

	if(look.child == NULL)
		return look;	/*树为空树*/
	while(look.child != NULL)
	{
		if(ToLeft(pi,&(look.child->item)))
		{
			look.parent = look.child;
			look.child = look.child->left;
		}
		else if(ToRight(pi,&(look.child->item)))
		{
			look.parent = look.child;
			look.child = look.child->right;
		}
		else
			break;
	}

	return look;
}

