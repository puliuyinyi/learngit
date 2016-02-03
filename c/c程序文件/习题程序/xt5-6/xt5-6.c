#include<stdio.h>
int main()
{
	int i,j,s,f=0;
	for(i=1;i<=4;i++)
	{
		s=1;
		for(j=1;j<=i;j++)
		{s=s*j;}
	f=f+s;
	}
	printf("%d\n",f);
	return 0;
}