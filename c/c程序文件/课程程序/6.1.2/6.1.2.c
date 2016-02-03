#include<stdio.h>
int main()
{
	int i,a[10],c,j;
	for(i=0;i<=9;i++)
	    a[i]=i;
		for(i=0,j=9;i<=9;i++,j--)
			if(i<=j)
			{c=a[i];
			a[i]=a[j];
			a[j]=c;}
			for(i=0;i<=9;i++)
			printf("%d ",a[i]);
	printf("\n");
	return 0;
}