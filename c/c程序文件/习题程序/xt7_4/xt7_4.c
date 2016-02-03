#include<stdio.h>
int main()
{   
	int exchange(int b[3][3]);
	int a[3][3],i,j;
	for(i=0;i<=2;i++)
		for(j=0;j<=2;j++)
			scanf("%d",&a[i][j]);
		printf("原数组:\n");
    for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}
	exchange(a);
	printf("现数组:\n");
    for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}
}
int exchange(int b[3][3])
{
	int c[3][3],i,j;
	for(i=0;i<=2;i++)
		for(j=0;j<=2;j++)
			c[j][i]=b[i][j];
	for(i=0;i<=2;i++)
		for(j=0;j<=2;j++)
			b[i][j]=c[i][j];
}




