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


/*����ԭ��*/

/**
*��������һ������ʼ��Ϊ��
*����ǰ��ptreeָ��һ����
*�����󣺸����ѱ���ʼ��Ϊ����
**/
void InitializeTree(Tree * ptree);

/**
*������ȷ�����Ƿ�Ϊ��
*����ǰ��ptreeָ��һ����
*������Ϊ�շ���TRUE�����򷵻�FALSE
**/
int TreeIsEmpty(const Tree * ptree);

/**
*������ȷ�����Ƿ�����
*����ǰ��ptreeָ��һ����
*��������������TRUE�����򷵻�FALSE
**/
int TreeIsFull(const Tree * ptree);

/**
*������ȷ��������Ŀ�ĸ���
*����ǰ��ptreeָ��һ����
*�����󣺷������е���Ŀ����
**/
int TreeItemCount(const Tree * ptree);

/**
*���������������һ����Ŀ
*����ǰ��pi�Ǵ���ӵ���Ŀ��ptreeָ��һ���ѳ�ʼ��������
*��������ӳɹ�����TRUE�����򷵻�FALSE
**/
int AddItem(const Item * pi, Tree * ptree);

/**
*�����������в���һ����Ŀ
*����ǰ��piָ��һ����Ŀ��ptreeָ��һ���ѳ�ʼ��������
*�������������Ŀ�����з���TRUE�����򷵻�FALSE
**/
int InTree(const Item * pi, const Tree * ptree);

/**
*������������ɾ��һ����Ŀ
*����ǰ��piָ��һ����ɾ������Ŀ��ptreeָ��һ���ѳ�ʼ��������
*������ɾ���ɹ�����TRUE�����򷵻�FALSE
**/
int DeleteItem(const Item * pi,Tree * ptree);

/**
*��������һ���������������е�ÿһ����Ŀ
*����ǰ��ptreeָ��һ������pfunָ��һ���޷���ֵ�ĺ������ú�������һ��Item����
*������pfunָ��ĺ������������е�ÿһ����Ŀһ��
**/
void Tracerse(const Tree * ptree, void(* pfun)(Item item));

/**
*������������ɾ�����нڵ�
*����ǰ��ptreeָ��һ���ѳ�ʼ��������
*�����󣺸���Ϊ����
**/
void DeleteAll(Tree * ptree);


#endif