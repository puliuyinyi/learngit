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
L:      	printf("������Ҫ��(%d,%d)�����ֲ�Ĳ���(A, B, C or D):",i+1,j+1);
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
			default:{printf("��ʾ:�����������������.\n");goto L;}
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
	printf("���ֲ˽���.\n");
	grossprofit=profit-cost;
	printf("***************************\n");
	printf("��Ԥ���������:\n");
	printf("***************************\n");
	printf("�ܳɱ�:%10.2f\n",cost);
	printf("��ë��:%10.2f\n",grossprofit);
	printf("������:%10.2f\n",profit);
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
	printf("��ʵ���������:\n");
	printf("***************************\n");
	printf("�ܳɱ�:%10.2f\n",cost);
	printf("��ë��:%10.2f\n",grossprofit);
	printf("������:%10.2f\n",profit);
}
void steal(struct vegetable ve[N][N])
{
	int i,j,s,t,n,tag=1;
	printf("�����ڿ�ʼ͵��:\n");
	while(tag)
	{
	 printf("***************************\n");
	 printf("������Ҫ͵�Ŀ��?(����(1,2)),����(0,0)��ʾ͵�˽���:");
	 scanf("%d,%d",&s,&t);
	 if(s==0&&t==0){printf("��͵�˽���.\n");break;}
	 if((s>0&&s<N+1)&&(t>0&&t<N+1))
	 {
	  if(ve[s-1][t-1].time<2)
	  {
	  n=ve[s-1][t-1].num*0.5;
      ve[s-1][t-1].num=ve[s-1][t-1].num-n;
	  ve[s-1][t-1].time++;
	  printf("͵���Ĺ�ʵ��:%d\n",n);
	  }
	  else printf("û����.\n");
	 }
	 else
		 printf("�����������������:\n");
	}
}
void welcome()
{
	printf("***************************\n");
	printf("      ��ӭʹ�ÿ����ֲ�     \n");
	printf("***************************\n");
	printf("�����ڿ�ʼ�ֲ�:\n");
}
void thanks()
{
	printf("***************************\n");
	printf("         ллʹ��          \n");
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

