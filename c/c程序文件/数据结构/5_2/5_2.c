#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef struct Node2
{
	char data;
	struct Node2* LChild;
	struct Node2* RChild;
}BiTNode,*BiTree;

typedef struct Node
{
	BiTree data;
	struct Node *next;
}LinkQueueNode;

typedef struct
{
	LinkQueueNode* front;
	LinkQueueNode* rear;
}LinkQueue;
int InitQueue(LinkQueue *Q)
{
	Q->front=(LinkQueueNode *)malloc(sizeof(LinkQueueNode));
	if(Q->front!=NULL)
	{
		Q->rear=Q->front;
		Q->front->next=NULL;
		return(TRUE);
	}
	else
		return(FALSE);
}

int IsEmpty(LinkQueue Q)
{
	if(Q.front==Q.rear)return(TRUE);
	else 
		return(FALSE);
}

int EnterQueue(LinkQueue *Q,BiTree x)
{
	LinkQueueNode *NewNode;
	NewNode=(LinkQueueNode*)malloc(sizeof(LinkQueueNode));
	if(NewNode!=NULL)
	{
		NewNode->data=x;
		NewNode->next=NULL;
		Q->rear->next=NewNode;
		Q->rear=NewNode;
		return(TRUE);
	}
	else return(FALSE);
}
int DeleteQueue(LinkQueue* Q,BiTree *x)
{
	LinkQueueNode * p;
	if(Q->front==Q->rear)
		return(FALSE);
	p=Q->front->next;
	Q->front->next=p->next;
	if(Q->rear==p)
		Q->rear=Q->front;
	*x=p->data;
	free(p);
	return(TRUE);
}

void CreateBiTree(BiTree *bt)
{
	char ch;
	ch=getchar();
	if(ch=='.')*bt=NULL;
	else
	{
		*bt=(BiTree)malloc(sizeof(BiTNode));
		(*bt)->data=ch;
		CreateBiTree(&((*bt)->LChild));
		CreateBiTree(&((*bt)->RChild));
	}
}
int LayerOrder(BiTree bt)
{
	LinkQueue Q;
	BiTree p;
	InitQueue(&Q);
	if(bt==NULL)return(FALSE);
	EnterQueue(&Q,bt);
	while(IsEmpty(Q)==0)
	{
		DeleteQueue(&Q,&p);
		printf("%c ",p->data);
		if(p->LChild)EnterQueue(&Q,p->LChild);
		if(p->RChild)EnterQueue(&Q,p->RChild);
	}
	printf("\n");
	return(TRUE);
}
void main()
{
	BiTree bt;
	printf("Enter a tree: ");
    CreateBiTree(&bt);
	LayerOrder(bt);
}
