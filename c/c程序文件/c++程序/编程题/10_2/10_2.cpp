#include<iostream.h>
#include<math.h>
class Point
{
	int x,y,z;
public:
	void Set(int a,int b,int c)
	{
		x=a;y=b;z=c;
	}
    int Getx(){return x;}
	int Gety(){return y;}
	int Getz(){return z;}
};
class Line
{
	Point p1,p2;
public:
	void Setp1(int x1,int y1,int z1)
	{
		p1.Set(x1,y1,z1);
	}
	void Setp2(int x2,int y2,int z2)
	{
		p2.Set(x2,y2,z2);
	}
	double LineLen()
	{
		double len;
		int x1,y1,z1,x2,y2,z2;
		x1=p1.Getx();y1=p1.Gety();z1=p1.Getz();
		x2=p2.Getx();y2=p2.Gety();z2=p2.Getz();
		len=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)+(z1-z2)*(z1-z2));
		return(len);
	}
	void Getp1(int *x1,int *y1,int *z1)
	{
		*x1=p1.Getx();
		*y1=p1.Gety();
		*z1=p1.Getz();
	}
	void Getp2(int &x2,int &y2,int &z2)
	{
		x2=p2.Getx();
		y2=p2.Gety();
		z2=p2.Getz();
	}
	void print(void)
	{
		cout<<"p1: ("<<p1.Getx()<<','<<p1.Gety()<<','<<p1.Getz()<<')';
        cout<<"  p2: ("<<p2.Getx()<<','<<p2.Gety()<<','<<p2.Getz()<<')'<<endl;
		cout<<"Len: "<<LineLen()<<endl;
	}
};
void main()
{
	int *x1,*y1,*z1;
	Line L;
	L.Setp1(1,1,1);
	L.Setp2(2,2,2);
	L.print();
}


