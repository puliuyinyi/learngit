#include<stdio.h>
int L=0,l=0,b=0,n=0,o=0;
int main()
{
	void stat(char string[40]);
	char s[40];
	printf("please input a string:");
	gets(s);
	stat(s);
	printf("capital letters:%d\nsmall letters:%d\nblank:%d\nnumbers:%d\nothers:%d\n",L,l,b,n,o);
	return 0;
}
void stat(char string[40])
{
	char *p=string;
	for(;*p!='\0';p++)
	{
		if(*p>='A'&&*p<='Z')
			L++;
		else if(*p>='a'&&*p<='z')
			l++;
		else if(*p==' ')
			b++;
		else if(*p>='0'&&*p<='9')
			n++;
		else o++;
	}
	return;
}

