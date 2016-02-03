#include<iostream.h>
#include<math.h>
int X1,X2,X3,Y1,Y2,Y3;
class Point
{
	int x,y;
public:
	void Set(int a,int b)
	{
		x=a;
		y=b;
	}
	int Getx(){return x;}
	int Gety(){return y;}
};
class Triangle
{
	Point p[3];
public:
	void Setp1(int x1,int y1)
	{p[0].Set(x1,y1);}
	void Setp2(int x2,int y2)
	{p[1].Set(x2,y2);}
	void Setp3(int x3,int y3)
	{p[2].Set(x3,y3);}
	double distance(int i,int j)
	{
		double d;
		i--;j--;
		d=sqrt((p[i].Getx()-p[j].Getx())*(p[i].Getx()-p[j].Getx())+(p[i].Gety()-p[j].Gety())*(p[i].Gety()-p[j].Gety()));
		return d;
	}
	double girth(void)
	{
		double g;
		g=distance(1,2)+distance(1,3)+distance(2,3);
		return g;
	}
	double area(void)
	{
		double a,cos,sin;
		cos=((p[0].Getx()-p[2].Getx())*(p[1].Getx()-p[2].Getx())+(p[0].Gety()-p[2].Gety())*(p[1].Gety()-p[2].Gety()))
			/(distance(1,3)*distance(2,3));
        sin=sqrt(1-cos*cos);
		a=0.5*distance(2,3)*distance(1,3)*sin;
		return(a);
	}
	void back(void)
	{
		Setp1(X1,Y1);
		Setp2(X2,Y2);
		Setp3(X3,Y3);
	}
	void Xchange(void)
	{
		cout<<"\n关于Y轴对称:";
		int x1,x2,x3,y1,y2,y3;
		x1=-p[0].Getx();x2=-p[1].Getx();x3=-p[2].Getx();
		y1=p[0].Gety();y2=p[1].Gety();y3=p[2].Gety();
		Setp1(x1,y1);
		Setp2(x2,y2);
		Setp3(x3,y3);
	}
	void Ychange(void)
	{
		cout<<"\n关于X轴对称:";
		int x1,x2,x3,y1,y2,y3;
		x1=p[0].Getx();x2=p[1].Getx();x3=p[2].Getx();
		y1=-p[0].Gety();y2=-p[1].Gety();y3=-p[2].Gety();
		Setp1(x1,y1);
		Setp2(x2,y2);
		Setp3(x3,y3);
	}
	void move(int xoff,int yoff)
	{
		cout<<"\n平移:";
		int x1,x2,x3,y1,y2,y3;
		x1=p[0].Getx()+xoff;x2=p[1].Getx()+xoff;x3=p[2].Getx()+xoff;
		y1=p[0].Gety()+yoff;y2=p[1].Gety()+yoff;y3=p[2].Gety()+yoff;
		Setp1(x1,y1);
		Setp2(x2,y2);
		Setp3(x3,y3);
	}
	void print(void)
	{
		cout<<endl<<"Triangle:"<<endl;
		for(int i=0;i<3;i++)
		cout<<'p'<<i+1<<": "<<'('<<p[i].Getx()<<','<<p[i].Gety()<<")   ";
		cout<<endl;
		cout<<"d1: "<<distance(1,2)<<'\t';
		cout<<"d2: "<<distance(1,3)<<'\t';
		cout<<"d3: "<<distance(2,3)<<endl;
		cout<<"g: "<<girth()<<endl;
		cout<<"A: "<<area()<<endl;
	}
};
void main()
{
	Triangle t;
	t.Setp1(X1=0,Y1=0);
	t.Setp2(X2=2,Y2=0);
	t.Setp3(X3=1,Y3=2);
	t.print();
	t.Xchange();
	t.print();
	t.back();
	t.Ychange();
	t.print();
	t.back();
	t.move(1,1);
	t.print();
	t.back();
}





