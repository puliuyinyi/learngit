#include<stdio.h>
int main()
{
	void l(char s1[80],char s2[40]);
	char s1[80],s2[40];
	printf("请输入一行字符串: ");
	scanf("%s",s1);
	printf("请再输入一行字符串: ");
	scanf("%s",s2);
	l(s1,s2);
	printf("新字符串: %s\n",s1);
	return 0;
}
void l(char s1[80],char s2[40])
{
int i=0,j=0;
    while(s1[i]!='\0'){i++;}
    while(s2[j]!='\0'){s1[i++]=s2[j++];}
	s1[i]='\0';
}