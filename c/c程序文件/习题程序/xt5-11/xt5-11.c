#include<stdio.h>
int main()
{
	float s=100,t=100,k;
	int i;
	for(i=1;i<=20;i++)
	{
		t=t/2;
	    if(i<20)s=s+2*t;
	}
	printf("%f\t%f\n",s,t);
	return 0;
}