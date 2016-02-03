#include<stdio.h>
int main()
{
	int max(int x,int y);
	int a,b,c,d;
	scanf("%d,%d,%d",&a,&b,&c);
    d=max(a,b);
	d=max(d,c);
	printf("max=%d\n",d);
	return 0;
}
int max(int x,int y)
{
	int z;
	if(x>y)z=x;
	else z=y;
	return(z);
}