
#include<stdio.h>
#include<math.h>
int main()
{
	int n,w,i,r;
	w=0;
	i=2;
	scanf("%d",&n);
	while(i<=sqrt(n)&&w==0)
	{
		r=n%i;
	if(r==0)w=1;
	else i=i+1;
	}
	if(w==0)
		printf("n������\n");
	else 
		printf("n��������\n");
	return 0;
}