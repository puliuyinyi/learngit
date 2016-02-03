
#include<stdio.h>
int main()
{
	void x(char b[10]);
	int a[10];
	printf("请输入10个字符的字符串:");
	scanf("%s",a);
	x(a);
	printf("转变后字符串:%s\n",a);
	return 0;
}
void x(char b[10])
{
	int i;
	char c;
	for(i=0;i<=4;i++)
	{   c=b[9-i];
	    b[9-i]=b[i];
		b[i]=c;}	    
}
	
