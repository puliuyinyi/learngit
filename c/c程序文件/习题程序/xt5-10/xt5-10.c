#include<stdio.h>
int main()
{
	float f1=2,f2=1,c=0,s=0;
	int i;
	for(i=1;i<=20;i++)
	{
		s=f1/f2+s;
	     c=f1;
		 f1=f1+f2;
		 f2=c;
	}
		 printf("%f\n",s);
		 return 0;
}
