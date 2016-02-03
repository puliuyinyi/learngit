#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "queue.h"
#define MIN_PER_HR 60.0
#define TIME_PER_CUST 3
int newcustomer(double x);	/*�ж��Ƿ��й˿͵���*/
Item customertime(long when);	/*���ù˿Ͳ���*/

//int main()
//{
//	Queue line;
//	Item temp;	/*�����¹˿͵�����*/
//	int hours;	/*ģ���Сʱ��*/
//	int perhour;	/*ÿСʱ�˿�ƽ����*/
//	long cycle,cyclelimit;	/*ѭ�������������������Ͻ�*/
//	long turnaways = 0;	/*Ӧ�������������ܾ��Ĺ˿���*/
//	long customers = 0;	/*��������еĹ˿���*/
//	long served = 0;	/*��ģ���ڼ�õ�����Ĺ˿���*/
//	long sum_line = 0;	/*�ۼƵĶ��г���*/
//	int wait_time = 0;	/*�ӵ�ǰ��sigmund��������ʱ�䣬����ǰ�˿ͷ��������ʱ��*/
//	double min_per_cust;	/*�˿͵�����ƽ�����ʱ��*/
//	long line_wait = 0;	/*�����ۼƵȴ�ʱ��*/
//
//	InitializeQueue(&line);
//	srand(time(0));	/*�����ʼ��rand()����*/
//	puts("Case Studay:Sigmund Lander's Advice Booth");
//	puts("Eneter the number of simulation hours: ");
//	scanf("%d",&hours);
//	cyclelimit = MIN_PER_HR * hours;	//��Сʱת���ɷ��ӣ�����cyclelimit
//	puts("Enter the average number of customers per hour:");
//	scanf("%d",&perhour);
//	min_per_cust = MIN_PER_HR / perhour;	//�����ÿ���˿͵�����ƽ�����ʱ��
//	
//	for(cycle = 0; cycle < cyclelimit;cycle++)
//	{
//		/*����һ���˿ͣ����ݵ�ǰ�����жϲ���*/
//		if(newcustomer(min_per_cust))
//		{
//			if(QueueIsFull(&line))	/*�����������ܾ��Ĺ˿�+1*/
//				turnaways++;
//			else	/*�˿ͼ�����У�������еĹ˿���+1*/
//			{
//				customers++;
//				temp = customertime(cycle);
//				EnQueue(temp,&line);
//			}
//		}
//
//		/*��һ�������������ȡ��һ���˿�*/
//		if(wait_time <= 0 && !QueueIsEmpty(&line))
//		{
//			DeQueue(&temp,&line);	/*����ͷ�˿��˳��Ŷӣ����ܷ���*/
//			wait_time = temp.processtime;	/*������Sigmund���������ʱ��*/
//			line_wait += cycle - temp.arrive;	/*��ǰ������˿��Ŷӵ�ʱ��*/
//			served++;
//		}
//		if(wait_time > 0)
//			wait_time--;
//		sum_line += QueueItemCount(&line);
//	}
//
//	if(customers > 0)
//	{
//		printf("customers accepted : %ld\n",customers);
//		printf("  customers served : %ld\n",served);
//		printf("         turnaways : %ld\n",turnaways);
//		printf("average queue size : %.2f\n",(double)sum_line / cyclelimit);
//		printf(" average wait time : %.2f minutes\n",(double)line_wait / served);
//
//	}
//	else
//		puts("No customers!");
//	EmptyTheQueue(&line);
//	puts("Bye!");
//	
//	return 0;
//}

/*���������ģ������˿ͣ�x�ǹ˿͵�����ƽ�����ʱ�䣨�Է��Ӽƣ�
�����1�������й˿���������true
����x��10����ʾƽ��10������һ���ˣ���ô�ú���ƽ��10�˷���һ��true*/
int newcustomer(double x)
{
		if(rand() * x / RAND_MAX < 1)
			return TRUE;
		else
			return FALSE;
}

/*when �ǹ˿͵�����ʱ��
��������һ��Item�ṹ���ýṹ�Ĺ˿͵���ʱ������Ϊwhen
��Ҫ����ѯʱ������Ϊһ����Χ��1��3֮������ֵ*/
Item customertime(long when)
{
	Item cust;

	cust.processtime = rand() % TIME_PER_CUST + 1;
	cust.arrive = when;
	return cust;
}
