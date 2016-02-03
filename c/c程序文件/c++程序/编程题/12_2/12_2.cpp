#include<iostream.h>
#define PI 3.14159
class Height
{
protected:
	int height;
public:
	Height(int h=0){height=h;}
	void Setheight(int h)
	{
		height=h;
	}
	int Getheght()
	{
		return height;
	}
};
class Circle
{
protected:
	int circle;
public:
	Circle(int c=0){circle=c;}
	void Setcircle(int c)
	{
		circle=c;
	}
	int Getcircle()
	{
		return circle;
	}
	double Girth()
	{
		return 2*PI*circle;
	}
	double Area()
	{
		return PI*circle*circle;
	}
};
class Cylinder:public Height,public Circle
{
public:
	Cylinder(int h,int c):Height(h),Circle(c){}
	double SuperficialArea()
	{
		return 2*Area()+Girth()*height;
	}
	double Volume()
	{
		return Area()*height;
	}
	void print()
	{
		cout<<"Circle: "<<circle<<"     "<<"Height: "<<height<<endl;
		cout<<"Superficial Area: "<<SuperficialArea()<<endl;
		cout<<"Volume: "<<Volume()<<endl;
	}
};
main()
{
	int a,b;
	cout<<"Input Height and Circle: ";
	cin>>a>>b;
	Cylinder c(a,b);
	c.print();
}


