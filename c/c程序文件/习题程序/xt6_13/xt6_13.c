#include<stdio.h>
int main()
{
	int i=0,j=0;
	char s1[80],s2[40];
	printf("������һ���ַ���: ");
	scanf("%s",s1);
	printf("��������һ���ַ���: ");
	scanf("%s",s2);
	while(s1[i]!='\0'){i++;}
	while(s2[j]!='\0'){s1[i++]=s2[j++];}
	s1[i]='\0';
	printf("�µ��ַ���= %s",s1);
	printf("\n");
	return 0;
}




