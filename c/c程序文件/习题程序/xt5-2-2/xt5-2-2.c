#include<stdio.h>
#include<math.h>
int main()
{
	int sign=1,m=0;
	double pi=0.0,n=1.0,term=1.0;
	while(fabs(term)>=1e-8)
	{
		pi=pi+term;
		n=n+2;
		sign=-sign;
		term=sign/n;
		m=m+1;
	}
	pi=pi*4;
	printf("pi=%10.8f\n",pi);
	printf("执行循环次数:%d\n",m);
	return 0;
}