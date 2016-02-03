#include<stdio.h>
int main()
{
	int p(int n,int x);
	int x,n,y;
	printf("please input x=:");
	scanf("%d",&x);
	printf("please input n=:");
	scanf("%d",&n);
	y=p(n,x);
	printf("y= %d\n",y);
	return 0;
}
int p(int n,int x)
{
	int w;
	if(n==0)w=1;
	if(n==1)w=x;
	if(n>1)
	{
		w=((2*n-1)*x-p(n-1,x)-p(n-2,x)*(n-1))/n;
	}
	return(w);
}


