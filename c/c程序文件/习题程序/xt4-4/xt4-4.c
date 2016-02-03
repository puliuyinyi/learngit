#include <stdio.h>
int main()
{
	int max(int x, int y,int z);//声明函数
		int a,b,c,d;
		printf("please input three numbers: ");//提示输入三个数
		scanf("%d,%d,%d",&a,&b,&c);
			d=max(a,b,c); //调用函数
			printf("max=%d\n",d);
			return 0;
}
int max(int x,int y,int z) //定义函数
{
	int w;
	if(x>y>z)w=x;
	else if(y>z)w=y;
	else w=z;
	return(w);
}