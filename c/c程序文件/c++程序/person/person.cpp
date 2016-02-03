#include<iostream.h>
#include<string.h>
class Person
{
	char Name[20];
	char Sex;
	int Age;
public:
	void SetData(char[],char,int);
	void GetName(char *);
	char GetSex();
	int GetAge();
};
void Person::SetData(char na[],char s,int a)
{
	strcpy(Name,na);
	Sex=s;
	Age=a;
};
void Person::GetName(char *na)
{
	strcpy(na,Name);
}
char Person::GetSex()
{
	return Sex;
}
int Person::GetAge()
{
	return Age;
}

void main()
{
	Person a,*pa;
	char name[20];
	a.SetData("Cheng",'F',20);
	a.GetName(name);
	cout<<"Name: "<<name<<endl;
	cout<<" Sex: "<<a.GetSex()<<endl;
	cout<<" Age: "<<a.GetAge()<<endl;
}