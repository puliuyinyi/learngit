#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>

double accuracy(char str1[],char str2[])//������ȷ��
{
	
	double a;
	int i=0,l;
	double n=0;
	while(str1[i]!='\0'&&str2[i]!='\0')
	{
		if(str1[i]!=str2[i])
		{n=n+1.0;}
		i++;
	}
	l=strlen(str1);
	a=1-n/l;
	return a;

}
int randnum(int h,int t)//����h~t֮��������
{
	int n;
	srand((unsigned)time(NULL));
	n=rand()%(t-h+1)+h;
	return n;
}
void randstring(char a[],int n)//�����������Ϊ��n�����ַ���
{
	int i;
	srand( (unsigned)time( NULL ) );
	for(i=0;i<n;i++)
		a[i]='a'+rand()%26;
	a[i]='\0';
}
void test1(void)//��
{
	clock_t start,finish;
	double duration=0.0;
	char b[20];
	double r;
	char a[20];
	randstring(a,10);
	printf("�����������ַ���:");
	printf("%s\n",a);
	start=clock();
 L1:scanf("%s",b);
	if(strlen(a)!=strlen(b)) {printf("����������������������:\n");goto L1;}
	finish=clock();
	r=100*accuracy(a,b);
	printf("��ȷ��:%6.2lf%%\n",r);
	duration=(double)(finish-start)/CLOCKS_PER_SEC;
	printf("����ʱ��:%f seconds\n",duration);
}
void test2(void)//һ��
{
	clock_t start,finish;
	double duration=0.0;
	char b[30];
	double r;
	char a[30];
	randstring(a,20);
	printf("�����������ַ���:");
	printf("%s\n",a);
	start=clock();
L2:	scanf("%s",b);
	if(strlen(a)!=strlen(b)) {printf("����������������������:\n");goto L2;}
	finish=clock();
	r=100*accuracy(a,b);
	printf("��ȷ��:%6.2lf%%\n",r);
	duration=(double)(finish-start)/CLOCKS_PER_SEC;
	printf("����ʱ��:%f seconds\n",duration);

}
void test3(void)//����
{
	clock_t start,finish;
	double duration=0.0;
	char b[40];
	double r;
	char a[40];
	randstring(a,30);
	printf("�����������ַ���:");
	printf("%s\n",a);
	start=clock();
L3:	scanf("%s",b);
	if(strlen(a)!=strlen(b)) {printf("����������������������:\n");goto L3;}
	finish=clock();
	r=100*accuracy(a,b);
	printf("��ȷ��:%6.2lf%%\n",r);
	duration=(double)(finish-start)/CLOCKS_PER_SEC;
	printf("����ʱ��:%f seconds\n",duration);

}

void main()
{
	int tag;
	printf("*******************************************\n");
	printf("��ӭʹ�ô�����ϰ����������ѡ��ϰ��������:\n");
	printf("1.��\n");
	printf("2.һ��\n");
	printf("3.����\n");
	scanf("%d",&tag);
	switch(tag)
	{
	case 1:test1();break;
	case 2:test2();break;
	case 3:test3();break;
	default:printf("Error!\n");
	}
	printf("*******************************************\n");
	printf("ллʹ��.\n");
}
	