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
	cout<<"����Բ�İ뾶:";
	cin>>r;
	Circle c(r);
	cout<<"�뾶Ϊ"<<c.GetRadius()<<"��Բ�����="<<c.Area()<<'\n';
	return 0;
}
