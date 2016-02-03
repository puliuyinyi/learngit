#ifndef _TREE_H
#define _TREE_H

typedef struct item
{
	char petname[20];
	char petkind[20];
}Item;

#define MAXITEMS 10
#define TRUE 1
#define FALSE 0

typedef struct node
{
	Item item;
	struct node * left;
	struct node * right;

}Node;

typedef struct tree
{
	Node * root;
	int size;
}Tree;


/*函数原型*/

/**
*操作：把一个树初始化为空
*操作前：ptree指向一个树
*操作后：该树已被初始化为空树
**/
void InitializeTree(Tree * ptree);

/**
*操作：确定树是否为空
*操作前：ptree指向一个树
*操作后：为空返回TRUE，否则返回FALSE
**/
int TreeIsEmpty(const Tree * ptree);

/**
*操作：确定树是否已满
*操作前：ptree指向一个树
*操作后：已满返回TRUE，否则返回FALSE
**/
int TreeIsFull(const Tree * ptree);

/**
*操作：确定树中项目的个数
*操作前：ptree指向一个树
*操作后：返回数中的项目个数
**/
int TreeItemCount(const Tree * ptree);

/**
*操作：向树中添加一个项目
*操作前：pi是待添加的项目，ptree指向一个已初始化过的树
*操作后：添加成功返回TRUE，否则返回FALSE
**/
int AddItem(const Item * pi, Tree * ptree);

/**
*操作：在树中查找一个项目
*操作前：pi指向一个项目，ptree指向一个已初始化过的树
*操作后：如果该项目在树中返回TRUE，否则返回FALSE
**/
int InTree(const Item * pi, const Tree * ptree);

/**
*操作：从树中删除一个项目
*操作前：pi指向一个待删除的项目，ptree指向一个已初始化过的树
*操作后：删除成功返回TRUE，否则返回FALSE
**/
int DeleteItem(const Item * pi,Tree * ptree);

/**
*操作：把一个函数作用于树中的每一个项目
*操作前：ptree指向一个树，pfun指向一个无返回值的函数，该函数接受一个Item参数
*操作后：pfun指向的函数作用于树中的每一个项目一次
**/
void Tracerse(const Tree * ptree, void(* pfun)(Item item));

/**
*操作：从树中删除所有节点
*操作前：ptree指向一个已初始化过的树
*操作后：该树为空树
**/
void DeleteAll(Tree * ptree);


#endif