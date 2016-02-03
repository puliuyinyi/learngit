#include "stdio.h"
#define N 35
int M=N;
struct Student
{
	int num;
	int score[3];
	int aver;
	int sum;
	int order;
};
int main()
{
	void input(struct Student stu[]);
	void order(struct Student stu[]);
	void great(struct Student stu[]); 
	struct Student stu[N],*p=stu;
	input(p);
	order(p);
	great(p);
	return 0;
}

void input(struct Student stu[])
{
	int i;
	printf("请输入各学生的学号、三门课成绩(输入学号0表示输入结束):\n");
	for(i=0;i<N;i++)
	{
		scanf("%d",&stu[i].num);
		if(stu[i].num==0){M=i;break;}
		scanf("%d%d%d",&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
		stu[i].sum=stu[i].score[0]+stu[i].score[1]+stu[i].score[2];
	    stu[i].aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3;
	}
	printf("-------------------------------------------\n");
	printf("学号 成绩1 成绩2 成绩3  总分 平均分\n\n");
	for(i=0;i<M;i++)
	{	
	printf(" %d    %d    %d    %d    %d    %d  ",stu[i].num,stu[i].score[0],stu[i].score[1],stu[i].score[2],
		       stu[i].sum ,stu[i]. aver);
	    printf("\n");
	}

}
void order(struct Student stu[])
{
	int i,j,temp;
	for(i=0;i<M-1;i++)
		for(j=i+1;j<M;j++)
	{
		if(stu[j].sum>stu[i].sum)
		{
		 temp=stu[j].sum;stu[j].sum=stu[i].sum;stu[i].sum=temp;
         temp=stu[j].num;stu[j].num=stu[i].num;stu[i].num=temp;
         temp=stu[j].score[0];stu[j].score[0]=stu[i].score[0];stu[i].score[0]=temp;
         temp=stu[j].score[1];stu[j].score[1]=stu[i].score[1];stu[i].score[1]=temp;
         temp=stu[j].score[2];stu[j].score[2]=stu[i].score[2];stu[i].score[2]=temp;
		 temp=stu[j].aver;stu[j].aver=stu[i].aver;stu[i].aver=temp;
		}
	}
	for(i=0;i<M;i++)
		stu[i].order=i+1;
	printf("\n");
	printf("-------------------------------------------\n");
	printf("学号 成绩1 成绩2 成绩3  总分 平均分 名次\n\n");
    for(i=0;i<M;i++)
	{	
	printf(" %d    %d    %d    %d    %d    %d    %d",stu[i].num,stu[i].score[0],stu[i].score[1],
		stu[i].score[2],stu[i].sum ,stu[i]. aver,stu[i].order);
	    printf("\n");
	}
}
void great(struct Student stu[])
{
	int s,i;
	printf("请输入成绩代号(1 or 2 or 3):");
	scanf("%d",&s);
	printf("\n        该门课成绩在90分（含90分）以上且总分在前5名的学生情况:\n");
	printf("-------------------------------------------------------------------\n");
	printf("学号 成绩1 成绩2 成绩3  总分 平均分 名次\n\n");
	for(i=0;i<5;i++)
	{
		if(stu[i].score[s-1]>=90)
		{printf(" %d    %d    %d    %d    %d    %d    %d",stu[i].num,stu[i].score[0],stu[i].score[1],
		stu[i].score[2],stu[i].sum ,stu[i]. aver,stu[i].order);
		printf("\n");
		}
	
		
	}
	


}