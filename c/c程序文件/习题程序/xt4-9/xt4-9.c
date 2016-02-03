#include<stdio.h>
int main()
{
	int n,m;
	printf("请输入一个不多于5位数的正整数:");
	scanf("%d",&n);
	m=n/10;
	if(m==0)
	{
		     printf("%d是个位数\t",n);
	         printf("个位数:%d\t",n);
			 printf("逆数字:%d\n",n);
	}
			 
    if(m>=1&&m<10)
	{
		int a,b,c;
		a=n/10;
		b=n%10;
        c=10*b+a;
		           printf("%d是个两位数\t",n);
	               printf("十位数:%d   个位数:%d\t",a,b);
				   printf("逆数字:%d\n",c);
	}
	
	if(m>=10&&m<100)
	{
		int a,b,c,d;
		a=n/100;
		b=(n%100)/10;
		c=(n%100)%10;
		d=c*100+b*10+a;
		printf("%d是一个三位数\t",n);
		printf("百位数:%d   十位数:%d   个位数:%d\t",a,b,c);
		printf("逆数字:%d\n",d);
	}


	
	if(m>=100&&m<1000)
	{
		int a,b,c,d,e;
		a=n/1000;
		b=(n%1000)/100;
		c=((n%1000)%100)/10;
		d=((n%1000)%100)%10;
		e=d*1000+c*100+b*10+a;
		printf("%d是一个四位数\t",n);
		printf("千位数:%d  百位数:%d  十位数:%d  个位数:%d\t",a,b,c,d);
		printf("逆数字:%d\n",e);
	}
	if(m>=1000&&m<10000)
	{
		int a,b,c,d,e,f;
		a=n/10000;
		b=(n%10000)/1000;
		c=((n%10000)%1000)/100;
		d=(((n%10000)%1000)%100)/10;
		e=(((n%10000)%1000)%100)%10;
		f=e*10000+d*1000+c*100+b*10+a;
		printf("%d是一个五位数\t",n);
		printf("万位数:%d  千位数:%d  百位数:%d  十位数:%d  个位数:%d\t",a,b,c,d,e);
		printf("逆数字:%d\n",f);
	}
	if(m>=10000)
		printf("            请重新输入\n\a");
	
	return 0;

}

	       




