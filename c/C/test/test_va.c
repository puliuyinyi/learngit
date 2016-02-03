#include <stdio.h>
#include <stdarg.h>

double sum(int lim, ...)
{
  va_list ap; //创建一个va_list类型的变量，用来存放参数
  double tot = 0;
  int i;
  
  va_start(ap,lim); //把ap初始化为参数列表，参数个数为lim
  for(i = 0;i < lim;i++)  //访问参数列表中的每一项，第一次调用访问第一个，第二次调用访问第二个，以此类推double表示类型，这里的类型必须和参数类型完全一致
    tot += va_arg(ap,double);
  
  va_end(ap); //清理
  return tot;
}

int main()
{
	double res = sum(3,2.1,3.0,2.2);
	printf("TOT is %.2f\n",res);
	return 0;
}