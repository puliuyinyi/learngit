#include<stdio.h>
#include<stdlib.h>
#define N 20
#define M 2*N-1

typedef struct
{
	int weight;
	int parent;
	int LChild;
	int RChild;
}HTNode,HuffmanTree[M+1];
void select(HuffmanTree ht,int i,int *s1,int *s2)
{
	for(j=1;j<=i;j++)
		if(ht[j].parent==0&&ht[j].weight)

void CrthuffmanTress(HuffmanTree ht,int w[],int n)
{
	int i,m,s1,s2;
	for(i=1;i<=n;i++)
		ht[i]={w[i],0,0,0};
	m=2*n-1;
	for(i=n+1;i<=m;i++)ht[i]={0,0,0,0};
	for(i=n+1;i<=m;i++)
	{
		select(ht,i-1,&s1,&s2);
		ht[i].weight=ht[s1].weight+ht[s2].weight;
		ht[s1].parent=i;ht[s2].parent=i;
		ht[i].LChild=s1;ht[i].RCjild=s2;
	}
}
