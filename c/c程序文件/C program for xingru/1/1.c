#include <stdio.h>
#include <string.h>

void input(char name[5][10],int score[5][4])    // 输入函数
 {int i;
  for (i=0;i<5;i++)
   {printf("input name: ");
    scanf("%s",name[i]); //输入姓名
    printf("input scores: ");
    scanf("%d%d%d",&score[i][0],&score[i][1],&score[i][2]);  //输入三门课成绩
	score[i][3]=score[i][0]+score[i][1]+score[i][2];   //计算总成绩
   }
 }

void sort(char name[5][10],int score[5][4])    //排序输出函数
 { int i,j,k,max,temp1[4];  //temp1[4]为成绩临时变量
   char temp2[10];  //temp2[10]为姓名临时变量
   for (i=0;i<4;i++)  //用选择法进行排序
    {
	   max=i;
     for (j=i+1;j<5;j++)
		 if (score[max][3]<score[j][3]) //交换所有数据
		 {
			 max=j;
			  for(k=0;k<4;k++)
			  {
			    temp1[k]=score[i][k];
			    score[i][k]=score[j][k];
			    score[j][k]=temp1[k];
			  }
			 strcpy(temp2,name[i]);
			 strcpy(name[i],name[j]);
			 strcpy(name[j],temp2);
		 }
	 }
   //打印结果
   printf("********************************\n");
   printf("姓名     成绩1 成绩2 成绩3  总成绩\n");
for(i=0;i<5;i++)
	printf("%s\t%5d%5d%6d%8d\n",name[i],score[i][0],score[i][1],score[i][2],score[i][3]);
 }
int main()
{
	char name[5][10];
	int score[5][4];
    input(name,score);
	sort(name,score);
	return 0;
}