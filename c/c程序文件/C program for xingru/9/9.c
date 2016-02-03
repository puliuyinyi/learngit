#include<stdio.h>
int strlength(char a[])
{
	int n=0;
	while(a[n]!='\0')
		n++;
	return n;
}
int main()
{
	int n;
	char a[20];
	printf("Please input a string:\n");
	scanf("%s",a);
	n=strlength(a);
	printf("%d",n);
	return 0;
}
