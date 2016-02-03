#include<stdio.h>
#include<string.h>
#define N 30
int M=N;
struct City
{
	char string[30];
	int x;
	int y;
};
int main()
{
	void input(struct City city[]);
	void output(struct City city[]);
	void seek(struct City city[]);
	struct City city[N],*p=city;
	input(p);
	output(p);
	seek(p);
	return 0;
}
	 

void input(struct City city[])
{
	int i;
	char st[10]={"ok"};
	printf("请输入各城市的信息(输入“ok”表示输入结束)：\n");
	for(i=0;i<N;i++)
	{scanf("%s",city[i].string);
	if(strcmp(city[i].string,st)==0){M=i;break;}
	 scanf("%d%d",&city[i].x,&city[i].y);
	}
	
}
void output(struct City city[])
{
  int i,j;
  int temp;
  char str[40];
  printf("--------------------------------------------\n");
  printf("              城市名         x         y\n");
  printf("\n");
   for(i=0;i<M-1;i++)
	 for(j=i+1;j<M;j++)
	 {if(strcmp(city[i].string,city[j].string)>0)
	  {strcpy(str,city[i].string);
	   strcpy(city[i].string,city[j].string);
	   strcpy(city[j].string,str);
	   temp=city[i].x;city[i].x=city[j].x;city[j].x=temp;
	   temp=city[i].y;city[i].y=city[j].y;city[j].y=temp;
	  }
	 }
	 for(i=0;i<M;i++)
	 {
		 printf("%20s%10d%10d",city[i].string,city[i].x,city[i].y);
		 printf("\n");
	 }
}
void seek(struct City city[])
{
	int i,sign=0;
	int x0,y0;
	printf("--------------------------------------------\n");
	printf("请输入城市坐标:");
	scanf("%d%d",&x0,&y0);
	for(i=0;i<M;i++)
	{
		if(x0==city[i].x&&y0==city[i].y)
		{printf("该城市是: %s.\n",city[i].string);
		 sign=1;
		 break;}
	}
	if(sign==0)printf("Error!无相关城市信息.\n");
}
