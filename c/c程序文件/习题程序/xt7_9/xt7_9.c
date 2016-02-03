#include<stdio.h>
#include<stdio.h>
int l=0,b=0,n=0,o=0;
int main()
{
	void stat(char array[]);
	char s[40];
	printf("please input a string:");
	gets(s);
	stat(s);	
	printf("letters:%d  blank:%d  number:%d  others:%d\n",l,b,n,o);
	return 0;
}
void stat(char array[])
{
	int i;
	for(i=0;array[i]!='\0';i++)
	{
		if((array[i]>='A'&&array[i]<='Z')||(array[i]>='a'&&array[i]<='z'))
		l++;
	else if(array[i]==32)
		b++;
	else if(array[i]>='0'&&array[i]<='9')
		n++;
	else o++;
	}
}