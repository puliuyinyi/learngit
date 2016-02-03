#include<iostream.h>
#define PI 3.14159
class Point{
	int x,y;
public:
	Point(int a=0,int b=0):x(a),y(b){}
	int Getx(){return x;}
	int Gety(){return y;}
	void Setxy(int a,int b){x=a;y=b;}
	void ShowPoint(){cout<<"Point:("<<x<<','<<y<<")\n";}
};
class Circle:public Point
{
	int r;
public:
	Circle(int x,int y,int ra):Point(x,y)
	{
		r=ra;
	}
	void Setr(int ra){r=ra;}
	double Area(){return PI*r*r;}
	void Move(int x_offset,int y_offset)
	{
		int x1=Getx();
		int y1=Gety();
		x1+=x_offset;y1+=y_offset;
		Setxy(x1,y1);
	}
	void ShowCircle()
	{
		ShowPoint();
		cout<<"Radius: "<<r<<'\t';
		cout<<"Area:: "<<Area()<<endl;
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

