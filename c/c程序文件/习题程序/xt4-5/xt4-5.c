#include <stdio.h>
#include <math.h>
int main()
{
	int a,b;
	printf("please input a number: ");
	scanf("%d",&a);
	if(a<1000)
	{
		b=sqrt(a);
		printf("%d\n",b);
	}
	else
		printf("please put again.\n\a");
		return 0;
}