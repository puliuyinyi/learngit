#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>

double accuracy(char str1[],char str2[])//计算正确率
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
int randnum(int h,int t)//产生h~t之间的随机数
{
	int n;
	srand((unsigned)time(NULL));
	n=rand()%(t-h+1)+h;
	return n;
}
void randstring(char a[],int n)//随机产生长度为‘n’的字符串
{
	int i;
	srand( (unsigned)time( NULL ) );
	for(i=0;i<n;i++)
		a[i]='a'+rand()%26;
	a[i]='\0';
}
void test1(void)//简单
{
	clock_t start,finish;
	double duration=0.0;
	char b[20];
	double r;
	char a[20];
	randstring(a,10);
	printf("请输入以下字符串:");
	printf("%s\n",a);
	start=clock();
 L1:scanf("%s",b);
	if(strlen(a)!=strlen(b)) {printf("输入字数有误，请重新输入:\n");goto L1;}
	finish=clock();
	r=100*accuracy(a,b);
	printf("正确率:%6.2lf%%\n",r);
	duration=(double)(finish-start)/CLOCKS_PER_SEC;
	printf("所用时间:%f seconds\n",duration);
}
void test2(void)//一般
{
	clock_t start,finish;
	double duration=0.0;
	char b[30];
	double r;
	char a[30];
	randstring(a,20);
	printf("请输入以下字符串:");
	printf("%s\n",a);
	start=clock();
L2:	scanf("%s",b);
	if(strlen(a)!=strlen(b)) {printf("输入字数有误，请重新输入:\n");goto L2;}
	finish=clock();
	r=100*accuracy(a,b);
	printf("正确率:%6.2lf%%\n",r);
	duration=(double)(finish-start)/CLOCKS_PER_SEC;
	printf("所用时间:%f seconds\n",duration);

}
void test3(void)//复杂
{
	clock_t start,finish;
	double duration=0.0;
	char b[40];
	double r;
	char a[40];
	randstring(a,30);
	printf("请输入以下字符串:");
	printf("%s\n",a);
	start=clock();
L3:	scanf("%s",b);
	if(strlen(a)!=strlen(b)) {printf("输入字数有误，请重新输入:\n");goto L3;}
	finish=clock();
	r=100*accuracy(a,b);
	printf("正确率:%6.2lf%%\n",r);
	duration=(double)(finish-start)/CLOCKS_PER_SEC;
	printf("所用时间:%f seconds\n",duration);

}

void main()
{
	int tag;
	printf("*******************************************\n");
	printf("欢迎使用打字练习，请输入所选练习级别的序号:\n");
	printf("1.简单\n");
	printf("2.一般\n");
	printf("3.复杂\n");
	scanf("%d",&tag);
	switch(tag)
	{
	case 1:test1();break;
	case 2:test2();break;
	case 3:test3();break;
	default:printf("Error!\n");
	}
	printf("*******************************************\n");
	printf("谢谢使用.\n");
}
	