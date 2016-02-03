#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct Node
{
	ElemType data;
	struct Node* next;
}Node,*LinkList;

void InitList(LinkList *L)
{
	*L=(LinkList)malloc(sizeof(Node));
	(*L)->next=NULL;
}

void CreateFromTail(LinkList L)
{
	Node *r,*s;
	ElemType c;
	int flag=1;
	r=L;
	printf("Enter L1(input 0 means end,the number of inputs must be even number):\n     ");
	while(flag)
	{
		
		scanf("%d",&c);
		if(c!=0)
		{
			s=(Node*)malloc(sizeof(Node));
			s->data=c;
			r->next=s;
			r=s;
		}
		else
		{
			flag=0;
			r->next=NULL;
		}
	}
}
void print(LinkList L)
{
	Node *p;
	p=L->next;
	while(p!=NULL)
	 {
		printf("%d ",p->data);
		  p=p->next;
	}
	printf("\n");
}
void Head(LinkList L,Node *p)
{
	Node *r;
	r=L;
	while(r->next!=p)
	{r=r->next;}
if(p->next==NULL)
    r->next=NULL;
else
    r->next=p->next;
   
   p->next=L->next;
   L->next=p;
}

void change(LinkList L)
{
	Node *r;
	Node *p;
	r=L->next;
	while(r->next->next!=NULL)
	{
		r=r->next;
		p=r->next;
		Head(L,r);
		r=p;
	}
	Head(L,r->next);
}
void main()
{
	Node *r;
	LinkList L;
    InitList(&L);
    CreateFromTail(L);
	change(L);
	print(L);
}
