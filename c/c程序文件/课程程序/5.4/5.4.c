#include<stdio.h>
#define sum 100000
int main()
{
	float amount,aver,total;
	int i;
	for(i=1,total=0;i<=100;i++)
	{
		printf("please enter amount:");
		scanf("%f",&amount);
		total=total+amount;
		if(total>=sum)break;
	}
	aver=total/i;
	printf("sum=%d\naver=%10.2f\n",i,aver);
	return 0;
}
