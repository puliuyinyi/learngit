#include<stdio.h>
#include<stdlib.h>
int N=1;
typedef struct Node
{
	char data;
	int num;
	struct Node* LChild;
	struct Node* RChild;
}BiTNode,*BiTree;
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
void PrintTree(BiTree bt,int nLayer)
{
	int i;
	if(bt==NULL)return;
	  PrintTree(bt->RChild,nLayer+1);
	 for(i=0;i<nLayer;i++)
		  printf("     ");
	 printf("%c%d\n",bt->data,bt->num);
	 PrintTree(bt->LChild,nLayer+1);
}
void DealTree(BiTree bt)
{
	if(bt!=NULL)
	{
	   DealTree(bt->LChild);
	   DealTree(bt->RChild);
       if(bt->data!='.'){bt->num=N;N++;}
	}
}
void main()
{
	BiTree bt;
	printf("Enter a tree:");
    CreateBiTree(&bt);
	DealTree(bt);
	printf("          ---------------------------------------------------------\n");
	PrintTree(bt,5);
}
