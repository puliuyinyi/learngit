#include<iostream.h>
#include<string.h>
class Person
{
protected:
	char num[15],name[20],faddr[25],tel[15],e_mail[30];
	char sex;
public:
	void SetNum(char n[])
	{
		strcpy(num,n);
	}
	void SetName(char n[])
	{
		strcpy(name,n);
	}
	void SetSex(char s)
	{
		sex=s;
	}
	void SetFaddr(char f[])
	{
		strcpy(faddr,f);
	}
	void SetTel(char t[])
	{
		strcpy(tel,t);
	}
	void SetE_mail(char e[])
	{
		strcpy(e_mail,e);
	}
	void printp()
	{
		cout<<"Num: "<<num<<"   Name: "<<name<<"   Sex: "<<sex<<endl;
		cout<<"Faddr: "<<faddr<<endl;
		cout<<"Tel: "<<tel<<"   E_mail: "<<e_mail<<endl;
	}
};
class Student:public Person
{
protected:
	int math,physics,eng,prog;
public:
	void SetStudent_ID(char id[])
	{
		strcpy(num,id);
	}
	void Setscore(char tag,int score)
	{
		switch(tag)
		{
		case 'm':math=score;break;
		case 'p':physics=score;break;
		case 'e':eng=score;break;
		case 'c':prog=score;break;
		default:cout<<"Error!\a"<<endl;
		}
	}
	void prints()
	{
		printp();
		cout<<"Score:"<<endl;
		cout<<"      "<<"Math: "<<math<<"   Physics: "<<physics<<endl;
		cout<<"      "<<"English: "<<eng<<"   Prog: "<<prog<<endl;
	}
};
class Teacher:public Person
{
protected:
	char headship[15],post[15];
	int salary;
public:
	void SetHeadship(char h[])
	{
		strcpy(headship,h);
	}
	void SetPost(char p[])
	{
		strcpy(post,p);
	}
	void SetSalary(int s)
	{
		salary=s;
	}
	void printt()
	{
		printp();
		cout<<"Headship: "<<headship<<"   Post: "<<post<<"   Salary: "<<salary<<endl;
	}
};
main()
{
	Student s;
	s.SetStudent_ID("2011118119");
	s.SetName("wangmeng");
	s.SetSex('M');
	s.SetFaddr("Baoji");
	s.SetTel("18706787925");
	s.SetE_mail("wangmeng_email@126.com");
	s.Setscore('m',80);
	s.Setscore('p',82);
	s.Setscore('e',78);
	s.Setscore('c',90);
	s.prints();
	Teacher t;
	t.SetNum("2011118119");
	t.SetName("wangmeng");
	t.SetSex('M');
	t.SetFaddr("Baoji");
	t.SetTel("18706787925");
	t.SetE_mail("wangmeng_email@126.com");
	t.SetHeadship("teacher");
	t.SetPost("professor");
	t.SetSalary(6000);
	t.printt();
}

