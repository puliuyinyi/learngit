#include<stdio.h>
int main()
{
	float i,j,k,s,s1=0.0,s2=0.0,s3=0.0;
		for(i=1;i<=100;i++)
		     s1=s1+i;
		for(j=1;j<=50;j++)
		     s2=s2+j*j;
		for(k=1;k<=10;k++)
		     s3=s3+1/k;
		s=s1+s2+s3;
		printf("sum is %f\n",s);
		return 0;
}