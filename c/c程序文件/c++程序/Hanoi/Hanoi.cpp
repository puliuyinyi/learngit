#include<iostream.h>
void hanoi(int,char,char,char);
void move(char,char);
void main()
{
	int m;
	cout<<"input the number of diskes:"<<endl;
	cin>>m;
	cout<<"The step to moving " <<m<<" diskes:\n";
	hanoi(m,'A','B','C');
}
void hanoi(int n,char one,char two,char three)
{
	if(n==1)
		move(one,three);
	else
	{
		hanoi(n-1,one,three,two);
		move(one,three);
		hanoi(n-1,two,one,three);
	}
}
void move(char getone,char putone)
{
	cout<<getone<<"-->"<<putone<<endl;
}