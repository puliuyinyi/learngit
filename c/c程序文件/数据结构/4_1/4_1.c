#include<stdio.h>
#define SIZE_A 10

void main()
{
	int i,j;
	int x,y;
	int a[SIZE_A][SIZE_A];
	int b[SIZE_A*SIZE_A];
	int number=1;
	for(i=0;i<SIZE_A;i++)
	{
		for(j=0;j<SIZE_A;j++)
		{
		   if(i>j)a[i][j]=0;
		   else
			{
			  a[i][j]=number;
		      number++;
			}
		}
	}
	printf("上三角矩阵:\n");
	for(i=0;i<SIZE_A;i++)
	{
		for(j=0;j<SIZE_A;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
	for(i=0;i<SIZE_A;i++)
	{
		for(j=0;j<SIZE_A;j++)
	   {
			if(i<=j)b[(21-i)*i/2+(j-i)]=a[i][j];
		}
	}
	
	printf("请输入行和列:");
	scanf("%d,%d",&x,&y);
	printf("该处的元素值为: ");
	if(x>y)
		printf("0");
	else
		printf("%d",b[(21-x)*x/2+(y-x)]);
	printf("\n");

		
	
}
