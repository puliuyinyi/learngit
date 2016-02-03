#include<stdio.h>
int main()
{
	int i,j,x,a[6]={4,9,34,67,128};
	for(i=0;i<=4;i++)
		printf("%5d",a[i]);
	scanf("%d",&x);
	for(i=0;i<=4;i++)
	{
		if(a[i]>x)
		{
			for(j=4;j>=i;j--)
			{a[j+1]=a[j];}
			a[i]=x;
			break;
		}
	}
	if(x>=128) a[5]=x;
	for(i=0;i<=5;i++)
		printf("%d  ",a[i]);
	printf("\n");
	return 0;
}
