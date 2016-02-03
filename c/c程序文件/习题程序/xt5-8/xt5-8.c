#include<stdio.h>
int main()
{
	int n,b,s,g;
	for(n=100;n<=999;n++)
	{
		b=n/100;
	    s=(n%100)/10;
		g=(n%100)%10;
		if(n==b*b*b+s*s*s+g*g*g)
			printf("%d\t",n);
	}
	printf("\n");
	return 0;
}
		

