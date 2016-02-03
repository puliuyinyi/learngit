#include<stdio.h>
int main()
{
	int i,j,k,n;
		for(i=1,n=3;i<=7,n>=0;i=i+2,n--)
		{
			   for(j=1;j<=n;j++)
			printf(" ");
			   for(k=1;k<=i;k++)
			printf("*");
			printf("\n");
		}
        for(i=5,n=1;i>=1,n<=3;i=i-2,n++)
		{
			   for(j=1;j<=n;j++)
			printf(" ");
			   for(k=1;k<=i;k++)
			printf("*");
			printf("\n");
		}
			return 0;
}
