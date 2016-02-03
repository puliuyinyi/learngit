#include<stdio.h>
#define MAXSIZE 100

typedef struct
{
	int elem[MAXSIZE];
	int last;
}SeqList;

void Input(SeqList *L)
{
	int i=0;
	int number;
	printf("Enter some numbers(input '0' means end):\n");
	scanf("%d",&number);
	while(number!=0)
	{
		L->elem[i]=number;
		i++;
		scanf("%d",&number);
	}
	L->last=i-1;
}
void DelList(SeqList *L,int i)
{
	int k;
	if((i<1)||(i>L->last+1))
		printf("Error!");
	for(k=i;k<=L->last;k++)
		L->elem[k-1]=L->elem[k];
	L->last--;
}
void Change(SeqList *L)
{
	int i=0,j=1;
	while(j<=L->last)
	{
		if(L->elem[i]==L->elem[j])
			DelList(L,j);
		else
		{i++;j++;}
	}
	
}
void Output(SeqList L)
{
	int i;
	for(i=0;i<=L.last;i++)
	{
		printf("%d ",L.elem[i]);
	}
}
void main()
{
	SeqList L;
	Input(&L);
	Change(&L);
	Output(L);
}