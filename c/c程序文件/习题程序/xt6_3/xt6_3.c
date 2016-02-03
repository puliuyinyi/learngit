#include<stdio.h>
int main()
{
	int i,j,s=0;
	int a[3][3]={{3,6,7},{2,1,5},{4,1,0}};
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}
	for(i=0;i<=2;i++)
		for(j=0;j<=2;j++)
			if((i+j)%2==0)
				s=s+a[i][j];
	printf("对角线之和= %d\n",s);
		return 0;
}