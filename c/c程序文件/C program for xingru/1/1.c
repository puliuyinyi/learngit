#include <stdio.h>
#include <string.h>

void input(char name[5][10],int score[5][4])    // ���뺯��
 {int i;
  for (i=0;i<5;i++)
   {printf("input name: ");
    scanf("%s",name[i]); //��������
    printf("input scores: ");
    scanf("%d%d%d",&score[i][0],&score[i][1],&score[i][2]);  //�������ſγɼ�
	score[i][3]=score[i][0]+score[i][1]+score[i][2];   //�����ܳɼ�
   }
 }

void sort(char name[5][10],int score[5][4])    //�����������
 { int i,j,k,max,temp1[4];  //temp1[4]Ϊ�ɼ���ʱ����
   char temp2[10];  //temp2[10]Ϊ������ʱ����
   for (i=0;i<4;i++)  //��ѡ�񷨽�������
    {
	   max=i;
     for (j=i+1;j<5;j++)
		 if (score[max][3]<score[j][3]) //������������
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
   //��ӡ���
   printf("********************************\n");
   printf("����     �ɼ�1 �ɼ�2 �ɼ�3  �ܳɼ�\n");
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