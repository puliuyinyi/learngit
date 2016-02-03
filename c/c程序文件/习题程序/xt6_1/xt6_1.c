#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,s;
    printf("输出100以内的素数:");
		for(i=2;i<=100;i++)
		{   
			if(i==2)printf("%5d",i);
			else 
			{
				s=0;
			for(j=2;j<=sqrt(i);j++)
			{if(i%j==0)s=1;}
		    if(s==0)printf("%5d",i);
			}
		}
		printf("\n");
		return 0;
}
