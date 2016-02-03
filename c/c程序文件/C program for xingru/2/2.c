#include<stdio.h>
main()
{
	void strcat1(char s1[],char s2[]);
	char str1[50];
	char str2[50];
	printf("ÇëÊäÈëÁ½¸ö×Ö·û´®:\n");
	scanf("%s",str1);
	scanf("%s",str2);
	strcat1(str1,str2);
	printf("ĞÂ×Ö·û´®: %s\n",str1);
}

void strcat1(char s1[],char s2[])
{
	int i=0;
	int j=0;
    while (s1[i]!='\0')
	{i++;}
    while(s2[j]!='\0')
	{s1[i++]=s2[j++];}
   s1[i]='\0';
  
}