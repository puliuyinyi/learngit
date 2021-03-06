#include<iostream.h>
class Complex
{
	double Real,Image;
public:
	Complex(double x=0,double y=0)
	{
		Real=x;
		Image=y;
	}
	void SetReal(double real)
	{Real=real;}
	void SetImage(double image)
	{Image=image;}
	double GetReal(void)
	{return Real;}
	double GetImage(void)
	{return Image;}
	void print(void)
	{
		cout<<"Real: "<<Real<<','<<"Image: "<<Image<<endl;
	}
	friend void Output(Complex &);
};
void Output(Complex &c1)
{
	cout<<c1.GetReal()<<'+'<<c1.GetImage()<<'i'<<endl;
}
main()
{
	Complex a(10,2);
	double x,y;
	a.print();
	x=a.GetReal();
	y=a.GetImage();
	cout<<"Real: "<<x<<','<<"Image: "<<y<<endl;
	a.SetReal(5);
	a.SetImage(0);
	a.print();
    a.SetImage(5);
	a.SetReal(7);
	Output(a);
}