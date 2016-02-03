#include<iostream.h>
#include<math.h>
class Point
{
	int x,y;
public:
      Point(int a=0,int b=0)
		{
				x=a;
				y=b;
				cout<<x<<','<<"构造 Point\n";
		}
	  int Getx(){return x;}
	  int Gety(){return y;}
	  ~Point(){cout<<x<<','<<y<<"析构 Point\n";}
};
class Line
{
	int width,color;
	Point p1,p2;
public:
	Line(int x1,int y1,int x2,int y2,int w,int c):p1(x1,y1),p2(x2,y2)
	{
		width=w;color=c;
		cout<<width<<','<<color<<"构造 Line\n";
	}
	double LineLen()
	{
		double len;
		int x1,y1,x2,y2;
		x1=p1.Getx();
		y1=p1.Gety();
		x2=p2.Getx();
		y2=p2.Gety();
		len=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
		return(len);
	}
	~Line(){cout<<width<<','<<color<<"析构 Line\n";}
};
void main()
{
	Line Li(0,0,1,1,3,6);
	cout<<"长度= "<<Li.LineLen()<<endl;
}

