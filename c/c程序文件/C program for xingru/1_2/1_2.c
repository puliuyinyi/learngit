#include "stdio.h"
#include "string.h"
#define N 35
int M=N;
struct Student
{
	char name[10];
	int score[3];
	int sum;
};
int main()
{
	void input(struct Student stu[]);
	void order(struct Student stu[]);
	struct Student stu[N];
	input(stu);
	order(stu);
	return 0;
}

void input(struct Student stu[])
{
	int i;
	printf("请输入各学生的姓名、三门课成绩(输入姓名“#”输入结束)\n");
	for(i=0;i<N;i++)
	{
		scanf("%s",stu[i].name);
		if(strcmp(stu[i].name,"#")==0){M=i;break;}
		scanf("%d%d%d",&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
		stu[i].sum=stu[i].score[0]+stu[i].score[1]+stu[i].score[2];
	}
	printf("-------------------------------------------\n");
	printf("姓名      成绩1  成绩2  成绩3  总分\n\n");
    for(i=0;i<M;i++)
	{	
	printf("%-10s%-7d%-7d%-7d%-7d",stu[i].name,stu[i].score[0],stu[i].score[1],
		stu[i].score[2],stu[i].sum);
	    printf("\n");
	}

}
void order(struct Student stu[])
{
	int i,j;
	struct Student temp;
	for(i=0;i<M-1;i++)
		for(j=i+1;j<M;j++)
	{
		if(stu[j].sum>stu[i].sum)
		{
		 temp=stu[j];stu[j]=stu[i];stu[i]=temp;
		}
	}
	printf("\n");
	printf("-------------------------------------------\n");
	printf("姓名      成绩1  成绩2  成绩3  总分\n\n");
    for(i=0;i<M;i++)
	{	
	printf("%-10s%-7d%-7d%-7d%-7d",stu[i].name,stu[i].score[0],stu[i].score[1],
		stu[i].score[2],stu[i].sum);
	    printf("\n");
	}
}