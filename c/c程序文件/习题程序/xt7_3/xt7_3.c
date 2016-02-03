#include<stdio.h>
#include<math.h>
int main()
{
	int ss(int y);
	int x,c;
	printf("请输入一个整数: ");
	scanf("%d",&x);
	if(x<=1)printf("该数既不是素数也不是合数\n") ;
	else 
	{c=ss(x);
	if(c==0)printf("该数是素数\n");
	else printf("该数不是素数\n");}
}

	int ss(int y)
	{
		int i,s=0;
		for(i=2;i<y;i++)
		{
			if(y%i==0){s=1;break;}
		}
		return(s);
	}

	
