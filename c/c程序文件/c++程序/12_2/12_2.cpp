#include<iostream.h>
#define PI 3.14159
class Point
{
protected:
	int x,y;
public:
	Point(int a=0,int b=0){x=a;y=b;}
	void ShowPoint(){cout<<"Point:("<<x<<','<<y<<")\n";}
	int Getx(){return x;}
	int Gety(){return y;}
	void Setxy(int a,int b){x=a;y=b;}
};
class Radius
{
protected:
	int r;
public:
	Radius(int ra=0){r=ra;}
	void Setr(int ra){r=ra;}
	int Getr(){return r;}
};
class Circle:public Point,public Radius
{
public:
	Circle(int x,int y,int ra):Point(x,y),Radius(ra){}
	double Area(){return PI*r*r;}
	void Move(int x_offset,int y_offset)
	{x+=x_offset;y+=y_offset;}
	void ShowCircle()
	{
		ShowPoint();
		cout<<"Radius: "<<r<<'\t';
		cout<<"Area: "<<Area()<<endl;
	}
};
void main()
{
	Circle c(1,1,1);
	c.ShowCircle();
	c.Move(1,2);
	c.ShowCircle();
	c.Setxy(4,5);
	c.Setr(2);
	c.ShowCircle();
}