#include <stdio.h>
int main()
{
	int max(int x,int y);
	int a,b,c,d,e,f,g;
	scanf("%d,%d,%d,%d",&a,&b,&c,&d);
	e=max(a,b);
	f=max(e,c);
	g=max(f,d);
	printf("max=%d\n",g);
	return 0;

}
int max(int x,int y)
{
	int z;
	if(x>y)z=x;
	else z=y;
	return(z);
}
