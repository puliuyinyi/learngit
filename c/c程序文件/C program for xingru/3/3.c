#include<stdio.h>
#define N 10
main()
{
	int a[N];
	int i,j,temp;
	printf("��������������:\n");
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	for(i=0,j=N-1;i<j;i++,j--)
	{
		temp=a[i];
	    a[i]=a[j];
		a[j]=temp;
	}
	printf("�任������:\n");
	for(i=0;i<N;i++)
		printf("%d ",a[i]);
	printf("\n");
}

