#include<stdio.h>
int main()
{
	int max(int x,int y);
	int min(int x,int y);
	int a,b,m,n;
	printf("��������������: ");
	scanf("%d%d",&a,&b);
	m=max(a,b);
	n=min(a,b);
	printf("���Լ��= %d\n",m);
	printf("��С������= %d\n",n);
	return 0;
}
int max(int x,int y)
{
	int i;
	if(x>y)
	{
		for(i=y;i>=0;i--)
		{if((x%i==0)&&(y%i==0))
		break;}
    }
	else
	{
		for(i=x;i>=0;i--)
		{if((x%i==0)&&(y%i==0))
		break;}
	}
	return(i);
}
int min(int x,int y)
{
	int k;
	k=(x*y)/max(x,y);
	return(k);
}