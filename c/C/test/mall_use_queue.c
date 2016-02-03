#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "queue.h"
#define MIN_PER_HR 60.0
#define TIME_PER_CUST 3
int newcustomer(double x);	/*判断是否有顾客到来*/
Item customertime(long when);	/*设置顾客参量*/

//int main()
//{
//	Queue line;
//	Item temp;	/*关于新顾客的数据*/
//	int hours;	/*模拟的小时数*/
//	int perhour;	/*每小时顾客平均数*/
//	long cycle,cyclelimit;	/*循环计数器，计数器的上界*/
//	long turnaways = 0;	/*应队列已满而被拒绝的顾客数*/
//	long customers = 0;	/*被加入队列的顾客数*/
//	long served = 0;	/*在模拟期间得到服务的顾客数*/
//	long sum_line = 0;	/*累计的队列长度*/
//	int wait_time = 0;	/*从当前到sigmund空闲所需时间，即当前顾客服务结束的时间*/
//	double min_per_cust;	/*顾客到来的平均间隔时间*/
//	long line_wait = 0;	/*队列累计等待时间*/
//
//	InitializeQueue(&line);
//	srand(time(0));	/*随机初始化rand()函数*/
//	puts("Case Studay:Sigmund Lander's Advice Booth");
//	puts("Eneter the number of simulation hours: ");
//	scanf("%d",&hours);
//	cyclelimit = MIN_PER_HR * hours;	//将小时转换成分钟，赋给cyclelimit
//	puts("Enter the average number of customers per hour:");
//	scanf("%d",&perhour);
//	min_per_cust = MIN_PER_HR / perhour;	//计算出每个顾客到来的平均间隔时间
//	
//	for(cycle = 0; cycle < cyclelimit;cycle++)
//	{
//		/*新来一个顾客，根据当前条件判断操作*/
//		if(newcustomer(min_per_cust))
//		{
//			if(QueueIsFull(&line))	/*队列满，被拒绝的顾客+1*/
//				turnaways++;
//			else	/*顾客加入队列，加入队列的顾客数+1*/
//			{
//				customers++;
//				temp = customertime(cycle);
//				EnQueue(temp,&line);
//			}
//		}
//
//		/*上一个服务结束，换取下一个顾客*/
//		if(wait_time <= 0 && !QueueIsEmpty(&line))
//		{
//			DeQueue(&temp,&line);	/*队列头顾客退出排队，接受服务*/
//			wait_time = temp.processtime;	/*重置离Sigmund空闲所需的时间*/
//			line_wait += cycle - temp.arrive;	/*当前被服务顾客排队的时间*/
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

/*利用随机数模拟产生顾客，x是顾客到来的平均间隔时间（以分钟计）
如果这1分钟内有顾客来，返回true
比如x是10，表示平均10分钟来一个人，那么该函数平均10此返回一次true*/
int newcustomer(double x)
{
		if(rand() * x / RAND_MAX < 1)
			return TRUE;
		else
			return FALSE;
}

/*when 是顾客到来的时间
函数返回一个Item结构，该结构的顾客到来时间设置为when
需要的咨询时间设置为一个范围在1到3之间的随机值*/
Item customertime(long when)
{
	Item cust;

	cust.processtime = rand() % TIME_PER_CUST + 1;
	cust.arrive = when;
	return cust;
}
