
#include<stdio.h>
int main()
{
	void x(char b[10]);
	int a[10];
	printf("������10���ַ����ַ���:");
	scanf("%s",a);
	x(a);
	printf("ת����ַ���:%s\n",a);
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
	
