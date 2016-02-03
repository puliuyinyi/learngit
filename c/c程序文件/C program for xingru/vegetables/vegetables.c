#include<stdio.h>
#define N 3
struct vegetable
{
	char name;
	int num;
	float seedprice,fruitprice;
	int time;
};
void plant(struct vegetable ve[N][N])
{
	char tag;
	int i,j;
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
		{
L:      	printf("请输入要在(%d,%d)块地种植的菜名(A, B, C or D):",i+1,j+1);
			scanf("%c",&tag);
			getchar();
			switch(tag)
			{
			case 'A':
				{
					ve[i][j].name='A';
				    ve[i][j].num=5;
				    ve[i][j].seedprice=0.10;
					ve[i][j].fruitprice=2.0;
					ve[i][j].time=0;
					break;
				}
			case 'B':
				{
					ve[i][j].name='B';
					ve[i][j].num=1;
					ve[i][j].seedprice=0.5;
					ve[i][j].fruitprice=5.0;
					ve[i][j].time=0;
					break;
				}
			case 'C':
				{
					ve[i][j].name='C';
					ve[i][j].num=10;
					ve[i][j].seedprice=0.01;
					ve[i][j].fruitprice=0.5;
					ve[i][j].time=0;
					break;
				}
			case 'D':
				{
					ve[i][j].name='D';
					ve[i][j].num=3;
					ve[i][j].seedprice=0.5;
					ve[i][j].fruitprice=1.0;
					ve[i][j].time=0;
					break;
				}
			default:{printf("提示:输入错误，请重新输入.\n");goto L;}
			}
		}
}
void print1(struct vegetable ve[N][N])
{
	int i,j;
	float profit=0,grossprofit=0,cost=0;
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
		{
			profit+=ve[i][j].fruitprice*ve[i][j].num;
			cost+=ve[i][j].seedprice;
		}
	printf("■种菜结束.\n");
	grossprofit=profit-cost;
	printf("***************************\n");
	printf("◆预测收益情况:\n");
	printf("***************************\n");
	printf("总成本:%10.2f\n",cost);
	printf("总毛利:%10.2f\n",grossprofit);
	printf("总收益:%10.2f\n",profit);
}
void print2(struct vegetable ve[N][N])
{
	int i,j;
	float profit=0,grossprofit=0,cost=0;
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
		{
			profit+=ve[i][j].fruitprice*ve[i][j].num;
			cost+=ve[i][j].seedprice;
		}
	grossprofit=profit-cost;
	printf("***************************\n");
	printf("◆实际收益情况:\n");
	printf("***************************\n");
	printf("总成本:%10.2f\n",cost);
	printf("总毛利:%10.2f\n",grossprofit);
	printf("总收益:%10.2f\n",profit);
}
void steal(struct vegetable ve[N][N])
{
	int i,j,s,t,n,tag=1;
	printf("■现在开始偷菜:\n");
	while(tag)
	{
	 printf("***************************\n");
	 printf("请输入要偷哪块地?(比如(1,2)),输入(0,0)表示偷菜结束:");
	 scanf("%d,%d",&s,&t);
	 if(s==0&&t==0){printf("■偷菜结束.\n");break;}
	 if((s>0&&s<N+1)&&(t>0&&t<N+1))
	 {
	  if(ve[s-1][t-1].time<2)
	  {
	  n=ve[s-1][t-1].num*0.5;
      ve[s-1][t-1].num=ve[s-1][t-1].num-n;
	  ve[s-1][t-1].time++;
	  printf("偷到的果实数:%d\n",n);
	  }
	  else printf("没有了.\n");
	 }
	 else
		 printf("输入错误，请重新输入:\n");
	}
}
void welcome()
{
	printf("***************************\n");
	printf("      欢迎使用开心种菜     \n");
	printf("***************************\n");
	printf("■现在开始种菜:\n");
}
void thanks()
{
	printf("***************************\n");
	printf("         谢谢使用          \n");
	printf("***************************\n");
}
main()
{
	struct vegetable v[N][N];
	welcome();
	plant(v);
	print1(v);
    steal(v);
	print2(v);
	thanks();
}

