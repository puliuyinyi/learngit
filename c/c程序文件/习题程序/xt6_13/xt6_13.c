#include<stdio.h>
int main()
{
	int i=0,j=0;
	char s1[80],s2[40];
	printf("请输入一行字符串: ");
	scanf("%s",s1);
	printf("请再输入一行字符串: ");
	scanf("%s",s2);
	while(s1[i]!='\0'){i++;}
	while(s2[j]!='\0'){s1[i++]=s2[j++];}
	s1[i]='\0';
	printf("新的字符串= %s",s1);
	printf("\n");
	return 0;
}




