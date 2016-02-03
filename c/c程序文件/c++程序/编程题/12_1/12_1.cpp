#include<iostream.h>
#include<math.h>
class Point
{
protected:
	int x,y;
public:
	Point(int a=0,int b=0){x=a;y=b;}
	int Getx(){return x;}
	int Gety(){return y;}
	void Setxy(int a,int b){x=a;y=b;}
	void Show(){cout<<"Point:("<<x<<','<<y<<")\n";}
};
class Line:public Point
{
protected:
	int x1,y1;
public:
	Line(int a,int b,int c,int d):Point(a,b)
	{x1=c;y1=d;}
	double Length()
	{return sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));}
	void Show()
	{
		Point::Show();
		cout<<"Point:("<<x1<<','<<y1<<")\n";
	}
};
class Triangle:public Line
{
protected:
	int x2,y2;
public:
	Triangle(int a,int b,int c,int d,int e,int f):Line(a,b,c,d)
	{x2=e;y2=f;}
	double Distance(int x1,int y1,int x2,int y2)
	{
		return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	}
	double Girth()
	{
		return(Distance(x,y,x1,y1)+Distance(x1,y1,x2,y2)+Distance(x,y,x2,y2));
	}
	double Area()
	{
		double a,cos,sin;
		cos=((x-x2)*(x1-x2)+(y-y2)*(y1-y2))/(Distance(x,y,x2,y2)*Distance(x1,y1,x2,y2));
        sin=sqrt(1-cos*cos);
		a=0.5*Distance(x1,y1,x2,y2)*Distance(x,y,x2,y2)*sin;
		return(a);
	}
	void Show()
	{
		Line::Show();
		cout<<"Point:("<<x2<<','<<y2<<")\n";
		cout<<"Girth: "<<Girth()<<endl;
		cout<<"Area: "<<Area()<<endl;
	}

};
int main()
{
	Triangle t(0,0,1,0,0,1);
	t.Show();
}

		

