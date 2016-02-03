#include<iostream.h>
#include<string.h>
class Student
{
	char num[15],name[20],faddr[30],tel[15],e_mail[30];
	char sex;
	int math,physics,eng,prog;
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
	void setScore(char tag,int score)
	{
		if(tag=='m')math=score;
		if(tag=='p')physics=score;
		if(tag=='e')eng=score;
        if(tag=='c')prog=score;
	}
	void print(void)
	{
		cout<<"Num: "<<num<<"   Name: "<<name<<"   Sex: "<<sex<<endl;
		cout<<"Faddr: "<<faddr<<endl;
		cout<<"Tel: "<<tel<<"\tE-mail: "<<e_mail<<endl;
		cout<<"Score: "<<endl;
		cout<<"       "<<"Math: "<<math<<"     Physics: "<<physics<<endl;
		cout<<"       "<<"English: "<<eng<<"     Prog: "<<prog<<endl;
	}
};
void main()
{
	Student stu;
	stu.setNum("2011118119");
	stu.setName("wangmeng");
	stu.setSex('M');
	stu.setFaddr("earth");
	stu.setTel("18706787925");
	stu.setE_mail("wangmeng_email@126.com");
	stu.setScore('m',100);
	stu.setScore('p',100);
	stu.setScore('e',100);
	stu.setScore('c',100);
	stu.print();
}



		

