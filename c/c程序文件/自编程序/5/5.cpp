#include<stdio.h>
#include<stdlib.h>//包含了C语言的一些函数 >
enum state{
	ready,
	execute,
	block,
	finish
};//定义进程状态
struct pcb{
	char name[10];//进程名
	int cputime;//cpu运行时间
	int needtime;//进程运行所需时间
	int count;//进程执行次数
	int round;//时间片轮转次数
	state process;//进程状态
	pcb * next;//链指针
};//定义进程PCB
int process_finish(pcb *q)
{
	int b1=1;
	while(b1&&q){
		b1 = b1&&q->needtime == 0;
		q=q->next;
	}
	return b1;
}//结束进程，即将队列中的每个进程的所需时间设置为0

pcb *get_process_round(int n){
	pcb *q;
	pcb *t;
	pcb *p;
	int i=0;
	printf("请输入进程名，时间(q1  5): \n");
	while (i<n){
		q=( pcb *)malloc(sizeof(pcb));
		cin>>q->name;
		cin>>q->needtime;
		q->cputime=0;
		q->round=0;
		q->count=0;
		q->process=ready;
		q->next=NULL;
		if(i==0){
			p=q;
			t=p;
		}
		else{
			t->next=q;
			t=q;
		}
		i++;
	}//while
	return p;
}//时间片轮转调度算法创建就绪进程队列
void cpu_round(pcb *q)
{
	q->cputime++;
	q->needtime--;
	if(q->needtime<0){
		q->needtime=0;
	}
	q->count++;
	q->round++;
	q->process=execute;
}//采用时间片轮转法调度算法执行的某一进程
pcb *get_next(pcb *k,pcb *head){
	pcb *t;
	t=k;
	do{
		t=t->next;
	}
	while(t&&t->process==finish);
	if(t==NULL){
		t=head;
		while(/*t->next!=k&&*/t->process==finish){
			t=t->next;
		}
	}
	return t;
}//获取下一个进程
void set_state(pcb *p)
{
	while(p){
		if(p->needtime==0){
			p->process=finish;//如果所需执行时间为0，则设置运行状态为结束
		}
		if(p->process==execute){
			p->process=ready;//如果为执行状态则设置为就绪
		}
		p=p->next;
	}
}//设置队列中进程执行状态
void display_round(pcb *p){
	cout<<"进程名"<<"  "<<"CPU运行时间"<<"  "<<"需要时间"<<"  "<<"执行次数"<<"  "<<"时间片轮转次数"<<"  "<<"此时状态"<<endl;
	while(p){
		cout<<p->name;
		cout<<"         ";
		cout<<p->cputime;
		cout<<"           ";
		cout<<p->needtime;
		cout<<"           ";
		cout<<p->count;
		cout<<"           ";
		cout<<p->round;
		cout<<"          ";
		switch(p->process){
		    case ready:cout<<"ready"<<endl;break;
		    case execute:cout<<"execute"<<endl;break;
		    case finish:cout<<"finish"<<endl;break;
		}
		p=p->next;
	}
}//时间片轮转调度算法输出调度信息
void main()
{
	pcb *p;
	pcb *r;
	system("cls");//清屏
	int n;
	cout<<"请输入进程数目:"<<endl;
	cin>>n;
	//clrscr
	p=get_process_round(n);
	int cpu = 0;
	system("cls");
	//clrscr
	r=p;
	while(!process_finish(p)){
		cpu++;
		cpu_round(r);
		r=get_next(r,p);
		cout<<"第"<<cpu<<"次CPU执行"<<endl;
		cout<<"*****************************************************************"<<endl;
		display_round(p);
		set_state(p);
		Sleep(5);

		//clrscr
	}
	cout<<"模拟进程结束......"<<endl;
}//时间片轮转法调度算法计算轮次及输出调度信息
