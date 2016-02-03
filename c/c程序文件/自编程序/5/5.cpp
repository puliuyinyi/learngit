#include<stdio.h>
#include<stdlib.h>//������C���Ե�һЩ���� >
enum state{
	ready,
	execute,
	block,
	finish
};//�������״̬
struct pcb{
	char name[10];//������
	int cputime;//cpu����ʱ��
	int needtime;//������������ʱ��
	int count;//����ִ�д���
	int round;//ʱ��Ƭ��ת����
	state process;//����״̬
	pcb * next;//��ָ��
};//�������PCB
int process_finish(pcb *q)
{
	int b1=1;
	while(b1&&q){
		b1 = b1&&q->needtime == 0;
		q=q->next;
	}
	return b1;
}//�������̣����������е�ÿ�����̵�����ʱ������Ϊ0

pcb *get_process_round(int n){
	pcb *q;
	pcb *t;
	pcb *p;
	int i=0;
	printf("�������������ʱ��(q1  5): \n");
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
}//ʱ��Ƭ��ת�����㷨�����������̶���
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
}//����ʱ��Ƭ��ת�������㷨ִ�е�ĳһ����
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
}//��ȡ��һ������
void set_state(pcb *p)
{
	while(p){
		if(p->needtime==0){
			p->process=finish;//�������ִ��ʱ��Ϊ0������������״̬Ϊ����
		}
		if(p->process==execute){
			p->process=ready;//���Ϊִ��״̬������Ϊ����
		}
		p=p->next;
	}
}//���ö����н���ִ��״̬
void display_round(pcb *p){
	cout<<"������"<<"  "<<"CPU����ʱ��"<<"  "<<"��Ҫʱ��"<<"  "<<"ִ�д���"<<"  "<<"ʱ��Ƭ��ת����"<<"  "<<"��ʱ״̬"<<endl;
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
}//ʱ��Ƭ��ת�����㷨���������Ϣ
void main()
{
	pcb *p;
	pcb *r;
	system("cls");//����
	int n;
	cout<<"�����������Ŀ:"<<endl;
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
		cout<<"��"<<cpu<<"��CPUִ��"<<endl;
		cout<<"*****************************************************************"<<endl;
		display_round(p);
		set_state(p);
		Sleep(5);

		//clrscr
	}
	cout<<"ģ����̽���......"<<endl;
}//ʱ��Ƭ��ת�������㷨�����ִμ����������Ϣ
