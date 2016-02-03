#include<iostream.h>
#include<string.h>
class Teacher{
	char num[15],name[20],faddr[30],tel[15],e_mail[25],headship[20],post[10];
	char sex;
	int salary;
public:
	void setNum(char newNum[])
	{
		strcpy(num,newNum);
	}
	void setName(char newName[])
	{
		strcpy(name,newName);
	}
	void setSex(char newSex)
	{
		sex=newSex;
	}
	void setFaddr(char newFaddr[])
	{
		strcpy(faddr,newFaddr);
	}
	void setTel(char newTel[])
	{
		strcpy(tel,newTel);
	}
	void setE_mail(char newE_mail[])
	{
		strcpy(e_mail,newE_mail);
	}
	void setHeadship(char newHeadship[])
	{
		strcpy(headship,newHeadship);
	}
	void setPost(char newPost[])
	{
		strcpy(post,newPost);
	}
	void setSalary(int newSalary)
	{
		salary=newSalary;
	}
	void print(void)
	{
		cout<<"Num: "<<num<<"    "<<"Name: "<<name<<"    "<<"Sex: "<<sex<<endl;
		cout<<"Faddr: "<<faddr<<endl;
		cout<<"Tel: "<<tel<<"    "<<"E-mail: "<<e_mail<<endl;
		cout<<"Headship: "<<headship<<"    "<<"Post: "<<post<<endl;
		cout<<"Salary: "<<salary<<endl;
	}
};
main()
{
	Teacher t;
	t.setNum("2011118119");
	t.setName("wangmeng");
	t.setSex('M');
	t.setFaddr("Baoji");
	t.setTel("18706787925");
	t.setE_mail("wangmeng_email@126.com");
	t.setSalary(6000);
	t.setHeadship("Teacher");
	t.setPost("Professor");
	t.print();
}




