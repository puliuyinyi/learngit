#include<stdio.h>
#include<time.h>
#include<math.h>
#include<string.h>
double A[100];//存储每一次练习的准确率
int N=0;//记录练习次数
double T=0.0;//记录总用时
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
	A[N]=a;
	N++;
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
void test(int h,int t)//长度介于h~k之间的字符串测试
{
	clock_t start,finish;
	double duration=0.0;
	char b[50];
	double r;
	char a[50];
	int n=randnum(h,t);
	randstring(a,n);
	printf("请输入以下字符串:");
	printf("%s\n",a);
	printf("字符串长度:%d\n",strlen(a));
	start=clock();
 L:scanf("%s",b);
	if(strlen(a)!=strlen(b)) {printf("输入字数有误，请重新输入:\n");goto L;}
	finish=clock();
	r=100*accuracy(a,b);
	printf("***********************************\n");
	printf("正确率:%6.2lf%%\n",r);
	duration=(double)(finish-start)/CLOCKS_PER_SEC;
	printf("所用时间:%f seconds\n",duration);
	T+=duration;
	printf("***********************************\n");

}
void main()
{
	int tag,i;
	double n=0.0;
	printf("*******************************************\n");
	printf("             欢迎使用打字练习\n");
	printf("*******************************************\n");
	do
	{
	printf("请输入所选练习级别的序号:\n");
	printf("1.简单\n");
	printf("2.一般\n");
	printf("3.复杂\n");
	scanf("%d",&tag);
	switch(tag)
	{
	case 1:test(5,10);break;
	case 2:test(10,20);break;
	case 3:test(20,30);break;
	default:printf("Error!\n");
	}
	getchar();//接受"Enter"
	printf("终止练习请输入‘0’，继续输入其它:");
	}
while(getchar()!='0');
    for(i=0;i<N;i++)
		n=n+A[i];
	printf("*******************************************\n");
	printf("总正确率:%6.2lf%%\n",100*(n/N));
	printf("总时间:%f seconds\n",T);
	printf("*******************************************\n");
	printf("                谢谢使用.\n");
	printf("*******************************************\n");

}
	