#include<stdio.h>
int main()
{
	int n,i,j;
	for(n=1;n<=1000;n++)
	{
		j=0;
		for(i=1;i<n;i++)
			if(n%i==0)j=j+i;
			if(n==j)
			{
				printf("%d ,its factors are",n);
			for(i=1;i<n;i++)
			
				if(n%i==0)
					printf(" %d,",i);
			
             printf("\n");
			}	
	}
	
	return 0;
}

