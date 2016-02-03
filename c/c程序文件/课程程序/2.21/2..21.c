#include <stdio.h>
#include <math.h>
int main()
{    
	int year;
	scanf("%d",&year);
		if(year%4!=0)
			printf("非闰年.\n");
		else if(year%100!=0)
			printf("是闰年.\n");
		else if(year%400==0)
			printf("是闰年.\n");
		else 
			printf("非闰年.\n");
	}

