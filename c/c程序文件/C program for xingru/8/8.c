#include<stdio.h>
#include<time.h>
#include<math.h>
#include<string.h>
double fun(char str1[],char str2[])
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
void test1(void)
{
	clock_t start,finish;
	double duration=0.0;
	char b[20];
	double r;
	char a[]={"iloveyou"};
	printf("请输入以下字符串:i love you\n");
	start=clock();
 L1:scanf("%s",b);
	if(strlen(a)!=strlen(b)) {printf("输入字数有误，请重新输入:\n");goto L1;}
	finish=clock();
	r=100*fun(a,b);
	printf("正确率:%6.2lf%%\n",r);
	duration=(double)(finish-start)/CLOCKS_PER_SEC;
	printf("所用时间:%f seconds\n",duration);

}
void test2(void)
{
	clock_t start,finish;
	double duration=0.0;
	char b[30];
	double r;
	char a[]={"liangxingruisagoodgirl"};
	printf("请输入以下字符串:liangxingru is a good girl\n");
	start=clock();
L2:	scanf("%s",b);
	if(strlen(a)!=strlen(b)) {printf("输入字数有误，请重新输入:\n");goto L2;}
	finish=clock();
	r=100*fun(a,b);
	printf("正确率:%6.2lf%%\n",r);
	duration=(double)(finish-start)/CLOCKS_PER_SEC;
	printf("所用时间:%f seconds\n",duration);

}
void test3(void)
{
	clock_t start,finish;
	double duration=0.0;
	char b[50];
	double r;
	char a[]={"ibelievethatyouwillhaveahappylifeoneday"};
	printf("请输入以下字符串:i believe that you will have a happy life one day\n");
	start=clock();
L3:	scanf("%s",b);
	if(strlen(a)!=strlen(b)) {printf("输入字数有误，请重新输入:\n");goto L3;}
	finish=clock();
	r=100*fun(a,b);
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





	

	



