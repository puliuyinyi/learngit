/**
*Name: bank.c
*Author: WangMeng
*Time: 2014-5-28
*Funtion:
**/
#include <stdio.h>
#define MAXPROCESS 10
#define MAXSOURCE 5

typedef struct process{
	int max[MAXSOURCE];
	int allocation[MAXSOURCE];
	int need[MAXSOURCE];
}Process;

typedef struct host{
	Process p[MAXPROCESS];
	int available[MAXSOURCE];
	int pNumber;
	int source;
}Host;

void init(Host * phost);
void initNeed(Host * phost);
void print(const Host * phost);

//int main(void)
//{
//	Host host;
//	init(&host);
//	print(&host);
//	return 0;
//}
/*
int check(Host * phost)
{
	
}
*/

void init(Host * phost)
{
	int i,j;
	
	puts("Please enter the number of the process:");
	scanf("%d",&(phost->pNumber));
	puts("Please enter the number of the sources:");
	scanf("%d",&(phost->source));
	
	for(i = 0;i < phost->pNumber;i++)
	{
		printf("Please enter the max array for process %d:(eg: 1 3 ... 2)\n",i+1);
		for(j = 0;j < phost->source;j++)
			scanf("%d",&(phost->p[i].max[j]));
	}
	for(i = 0;i < phost->pNumber;i++)
	{
		printf("Please enter the allocation array for process %d:(eg: 1 3 ... 2)\n",i+1);
		for(j = 0;j < phost->source;j++)
			scanf("%d",&(phost->p[i].allocation[j]));
	}
	
	initNeed(phost);
	
	puts("Please Enter avaliable array for host:(eg: 1 3 ... 2)");
	for(j = 0;j < phost->source;j++)
			scanf("%d",&(phost->available[j]));
	
}

void initNeed(Host * phost)
{
	int i,j;
	for(i = 0;i < phost->pNumber;i++)
		for(j = 0;j < phost->source;j++)
			phost->p[i].need[j] = phost->p[i].max[j] - phost->p[i].allocation[j];
}

void print(const Host * phost)
{
	int i,j;
	puts("processID\tmax\tallocation\tneed");
	for(i = 0;i < phost->pNumber;i++)
	{
		printf("%d\t",i);
		for(j = 0;j < phost->source;j++)
			printf("%d ",phost->p[i].max[j]);
		printf("\t");
		for(j = 0;j < phost->source;j++)
			printf("%d ",phost->p[i].allocation[j]);
		printf("\t");
		for(j = 0;j < phost->source;j++)
			printf("%d ",phost->p[i].need[j]);
		printf("\n");
	}
	puts("available:");
	for(j = 0;j < phost->source;j++)
			printf("%d ",phost->available[j]);
}
