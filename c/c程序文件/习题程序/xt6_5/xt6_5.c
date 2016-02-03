#include<stdio.h>
int main()
{
	int i,a[10],s;
		for(i=0;i<=9;i++)
			scanf("%d",&a[i]);
		printf("ÕýÐò: ");
		for(i=0;i<=9;i++)
			printf("%5d",a[i]);
		printf("\n");
		for(i=0;i<=4;i++)
		{
			s=a[i];
		    a[i]=a[9-i];
			a[9-i]=s;
		}
		printf("ÄæÐò: ");
		for(i=0;i<=9;i++)
			printf("%5d",a[i]);
		printf("\n");
		return 0;
}


		    

