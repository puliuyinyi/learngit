#include<stdio.h>
#include<time.h>
#include<math.h>
#include<string.h>
double A[100];//�洢ÿһ����ϰ��׼ȷ��
int N=0;//��¼��ϰ����
double T=0.0;//��¼����ʱ
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
	A[N]=a;
	N++;
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
void test(int h,int t)//���Ƚ���h~k֮����ַ�������
{
	clock_t start,finish;
	double duration=0.0;
	char b[50];
	double r;
	char a[50];
	int n=randnum(h,t);
	randstring(a,n);
	printf("�����������ַ���:");
	printf("%s\n",a);
	printf("�ַ�������:%d\n",strlen(a));
	start=clock();
 L:scanf("%s",b);
	if(strlen(a)!=strlen(b)) {printf("����������������������:\n");goto L;}
	finish=clock();
	r=100*accuracy(a,b);
	printf("***********************************\n");
	printf("��ȷ��:%6.2lf%%\n",r);
	duration=(double)(finish-start)/CLOCKS_PER_SEC;
	printf("����ʱ��:%f seconds\n",duration);
	T+=duration;
	printf("***********************************\n");

}
void main()
{
	int tag,i;
	double n=0.0;
	printf("*******************************************\n");
	printf("             ��ӭʹ�ô�����ϰ\n");
	printf("*******************************************\n");
	do
	{
	printf("��������ѡ��ϰ��������:\n");
	printf("1.��\n");
	printf("2.һ��\n");
	printf("3.����\n");
	scanf("%d",&tag);
	switch(tag)
	{
	case 1:test(5,10);break;
	case 2:test(10,20);break;
	case 3:test(20,30);break;
	default:printf("Error!\n");
	}
	getchar();//����"Enter"
	printf("��ֹ��ϰ�����롮0����������������:");
	}
while(getchar()!='0');
    for(i=0;i<N;i++)
		n=n+A[i];
	printf("*******************************************\n");
	printf("����ȷ��:%6.2lf%%\n",100*(n/N));
	printf("��ʱ��:%f seconds\n",T);
	printf("*******************************************\n");
	printf("                ллʹ��.\n");
	printf("*******************************************\n");

}
	