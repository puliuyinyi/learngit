#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i;
	printf("%d  ",randnum(1,10));
	printf("%d  ",randnum(1,10));
}
int randnum(int h,int t)//����h~t֮��������
{
	int n;
	srand((unsigned)time(NULL));
	n=rand()%26;
	printf("%d",n);
	return n;
}
