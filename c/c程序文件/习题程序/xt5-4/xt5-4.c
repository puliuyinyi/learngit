#include<stdio.h>
int main()
{
	char a;
	int l=0,s=0,n=0,o=0;
	while((a=getchar())!='\n')
	{
		if((a>='A'&&a<='Z')||(a>='a'&&a<='z'))
		l++;
	else if(a==' ')
		s++;
	else if(a>='0'&&a<='9')
		n++;
	else o++;
	}
	printf("��ĸ��:%d�ո���:%d������:%d�����ַ���:%d\n",l,s,n,o);
	return 0;
}
     
