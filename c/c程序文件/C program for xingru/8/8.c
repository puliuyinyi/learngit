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
	printf("�����������ַ���:i love you\n");
	start=clock();
 L1:scanf("%s",b);
	if(strlen(a)!=strlen(b)) {printf("����������������������:\n");goto L1;}
	finish=clock();
	r=100*fun(a,b);
	printf("��ȷ��:%6.2lf%%\n",r);
	duration=(double)(finish-start)/CLOCKS_PER_SEC;
	printf("����ʱ��:%f seconds\n",duration);

}
void test2(void)
{
	clock_t start,finish;
	double duration=0.0;
	char b[30];
	double r;
	char a[]={"liangxingruisagoodgirl"};
	printf("�����������ַ���:liangxingru is a good girl\n");
	start=clock();
L2:	scanf("%s",b);
	if(strlen(a)!=strlen(b)) {printf("����������������������:\n");goto L2;}
	finish=clock();
	r=100*fun(a,b);
	printf("��ȷ��:%6.2lf%%\n",r);
	duration=(double)(finish-start)/CLOCKS_PER_SEC;
	printf("����ʱ��:%f seconds\n",duration);

}
void test3(void)
{
	clock_t start,finish;
	double duration=0.0;
	char b[50];
	double r;
	char a[]={"ibelievethatyouwillhaveahappylifeoneday"};
	printf("�����������ַ���:i believe that you will have a happy life one day\n");
	start=clock();
L3:	scanf("%s",b);
	if(strlen(a)!=strlen(b)) {printf("����������������������:\n");goto L3;}
	finish=clock();
	r=100*fun(a,b);
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





	

	



