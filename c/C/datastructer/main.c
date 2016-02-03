#include <stdio.h>
#include "grade.h"

void input(struct clas * myclass);
void test(struct clas * myclass);
void sort(struct clas * myclass);
void output(struct clas * myclass);
int main(void)
{
	struct clas myclass;
	input(&myclass);
	test(&myclass);
	sort(&myclass);
	output(&myclass);
	return 0;
}

void input(struct clas * myclass)
{
	int i = 0;
	printf("Enter student's ID and his or her grades(eg:101,87,45,68,92),input ID = 0 means end:\n");
	
	while(i < MAX_SIZE)
	{
		
		scanf("%d,",&((*myclass).stu[i].id));
		if((*myclass).stu[i].id == 0)
			break;
		scanf("%lf,%lf,%lf,%lf",&((*myclass).stu[i].grades[0]),&((*myclass).stu[i].grades[1]),&((*myclass).stu[i].grades[2]),&((*myclass).stu[i].grades[3]));
		i++;
	}
	(*myclass).size = i;
}

void test(struct clas * myclass)
{
	int i;
	for(i = 0;i < (*myclass).size;i++)
	{
		struct student stu = (*myclass).stu[i];
		(*myclass).stu[i].tot = stu.grades[0] + stu.grades[1] + stu.grades[2] + stu.grades[3];
		(*myclass).stu[i].avg = (stu.grades[0] + stu.grades[1] + stu.grades[2] + stu.grades[3]) / 4;
	}
}

void sort(struct clas * myclass)
{
	int i,j;
	for(i = 0;i < (*myclass).size - 1;i++)
	{
		for(j = i;j < (*myclass).size;j++)
		{
			if((*myclass).stu[i].tot < (*myclass).stu[j].tot)
			{
				struct student temp;
				temp = (*myclass).stu[i];
				(*myclass).stu[i] = (*myclass).stu[j];
				(*myclass).stu[j] = temp;
			}
		}
	}
}

void output(struct clas * myclass)
{
	int i;
	struct clas clas = *myclass;
	printf("SID GRADES1 GRADES2 GRADES3 GRADES4 AVG TOT ORDER\n");
	for(i = 0;i < clas.size;i++)
	{
		printf("%d %.2f %.2f %.2f,%.2f,%.2f,%.2f %d\n",clas.stu[i].id,clas.stu[i].grades[0],clas.stu[i].grades[1],clas.stu[i].grades[2],clas.stu[i].grades[3],
			clas.stu[i].avg,clas.stu[i].tot,i + 1);
	}
}