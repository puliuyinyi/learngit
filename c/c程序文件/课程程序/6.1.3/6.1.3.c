#include<stdio.h>
int main()
{
	int i,a[10],b[10];
	for(i=0;i<=9;i++)
		a[i]=i;
	for(i=0;i<=9;i++)
	  b[i]=9-a[i];
	for(i=0;i<=9;i++)
	printf("%d ",b[i]);
	printf("\n");
	return 0;
}