#include<stdio.h>
int main()
{
	int a,b,i;
	printf("����������������:");
	scanf("%d%d",&a,&b);
	for(i=a;i>0;i--)
		if(a%i==0&&b%i==0)break;
		printf("���Լ��:%d\n",i);
		printf("��С������:%d\n",a*b/i);
	return 0;
}
