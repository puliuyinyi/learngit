#include<iostream>
using namespace std;
class Circle{
private:
	float r;
public:
	Circle(float a){r=a;}
	~Circle(){}
	void SetRadius(float a)
	{r=a;}
	float GetRadius()
	{return r;}
	float Area()
	{return 3.14159f*r*r;}
};
int main(void)
{
	float r;
	cout<<"输入圆的半径:";
	cin>>r;
	Circle c(r);
	cout<<"半径为"<<c.GetRadius()<<"的圆的面积="<<c.Area()<<'\n';
	return 0;
}
