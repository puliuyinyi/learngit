#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;

typedef struct Node
{
	ElemType data1;
	ElemType data2;
	struct Node* next;
}Node,*LinkList;

InitList(LinkList *L)
{
	*L=(LinkList)malloc(sizeof(Node));
	(*L)->next=NULL;
}

void GreatFromTail(LinkList L)
{
	Node *r,*s;
	int flag=1,c,n=1;
	r=L;
	printf("Plese input passwords(input '-1' stands for end):\n");
	while(flag)
	{
		scanf("%d",&c);
		if(c!=-1)
		{
			s=(Node *)malloc(sizeof(Node));
			s->data1=c;
			s->data2=n;
			r->next=s;
			r=s;
			n++;
		}
		else
		{
			flag=0;
			r->next=L->next;
		}
	}
}
void DelList(LinkList L,struct Node *p)
{
	Node *r,*s;
	r=L->next;
	while(r->next->next!=p)
	{r=r->next;}
	s=r->next;
	if(s==L->next){L->next=p;}
	r->next=p;
	free(s);
}
 void fun(LinkList L,int m)
{
	int i;
	Node *r;
	r=L->next;
 while(L->next!=L->next->next)
   {
	   for(i=1;i<m;i++)
	       r=r->next;
	m=r->data1;
	printf("%d,",r->data2);
	r=r->next;
    DelList(L,r);
   }
   printf("%d\n",L->next->data2);
}
/*void print(LinkList L)
{
	Node *r;
	r=L->next;
	do
	{
	 printf("%d (%d) ",r->data1,r->data2);
	 r=r->next;
	}while(r->next!=L->next);
	printf("%d (%d)",r->data1,r->data2);
	printf("\n");
}*/
void main()
{
	LinkList L;
    InitList(&L);
    GreatFromTail(L);
	printf("³öÁÐË³Ðò: ");
    fun(L,20);
}
