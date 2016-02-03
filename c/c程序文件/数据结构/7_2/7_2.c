#include<stdio.h>
#include<string.h>
#define MAXSIZE 100
#define N 30
struct Student
{
	char name[20];
	char sex;
	int age;
};
void main()
{
	int i;
	struct Student stu[MAXSIZE];
	for(i=0;i<3;i++)
	{
		scanf("%s",stu[i].name);
		scanf("%c",&stu[i].sex);
		scanf("%d",&stu->age);
	}

}

		
