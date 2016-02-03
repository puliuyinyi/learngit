#include<iostream.h>
#include<math.h>
class Point
{
	int x,y;
public:
	Point(int a=0,int b=0):x(a),y(b){}
	void show(){cout<<"point("<<x<<','<<y<<")\n";}
	int Getx(){return x;}
	int Gety(){return y;}
	friend double distance(Point &,Point &);
};
double distance(Point &p1,Point &p2)
{
	return sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
}
void main()
{
	Point p1,p2(1,1);
	cout<<distance(p1,p2)<<endl;
}