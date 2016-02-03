#include<stdio.h>
int main()
{
	int a,b,i;
	printf("请输入两个正整数:");
	scanf("%d%d",&a,&b);
	for(i=a;i>0;i--)
		if(a%i==0&&b%i==0)break;
		printf("最大公约数:%d\n",i);
		printf("最小公倍数:%d\n",a*b/i);
	return 0;
}
