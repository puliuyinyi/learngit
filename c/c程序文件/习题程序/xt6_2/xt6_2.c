#include<stdio.h>
int main()
{
	int i,j,min,k,a[10];
		for(i=0;i<=9;i++)
			scanf("%d",&a[i]);
		for(i=0;i<=8;i++)
		{
			min=a[i];
		  for(j=i+1;j<=9;j++)
		  {
		    if(a[j]<min)
			{min=a[j];
			a[j]=a[i];
		    a[i]=min;}
		  }
		   
		    
		}
		for(i=0;i<=9;i++)
		{printf("%d  ",a[i]);}
		printf("\n");
	return 0;
}		