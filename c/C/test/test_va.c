#include <stdio.h>
#include <stdarg.h>

double sum(int lim, ...)
{
  va_list ap; //����һ��va_list���͵ı�����������Ų���
  double tot = 0;
  int i;
  
  va_start(ap,lim); //��ap��ʼ��Ϊ�����б���������Ϊlim
  for(i = 0;i < lim;i++)  //���ʲ����б��е�ÿһ���һ�ε��÷��ʵ�һ�����ڶ��ε��÷��ʵڶ������Դ�����double��ʾ���ͣ���������ͱ���Ͳ���������ȫһ��
    tot += va_arg(ap,double);
  
  va_end(ap); //����
  return tot;
}

int main()
{
	double res = sum(3,2.1,3.0,2.2);
	printf("TOT is %.2f\n",res);
	return 0;
}