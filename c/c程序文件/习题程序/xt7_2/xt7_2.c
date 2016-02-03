#include<stdio.h>
#include<math.h>
double x1,x2,disc,p,q;
int main()
{
	void f1(double a,double b,double c);
    void f2(double a,double b,double c);
	double a,b,c;
	printf("please input a,b,c: ");
	scanf("%lf%lf%lf",&a,&b,&c);
	disc=b*b-4*a*c;
	if(disc<0)printf("This question hasn't real roots");
	if(disc==0)
	{
		 f1(a,b,c);
		 printf("real root:  x1=x2=%7.2f",x1);
	}
	if(disc>0)
	{
		f2(a,b,c);
		printf("real roots: x1=%7.2f\tx2=%7.2f",x1,x2);
	}
	printf("\n");
	return 0;
}
  void f1(double a,double b,double c)
  {
	  x1=x2=-b/(2.0*a);
  }
  void f2(double a,double b,double c)
  {
	  p=-b/(2.0*a);
	  q=sqrt(disc)/(2.0*a);
	  x1=p+q;x2=p-q;
  }



	     
