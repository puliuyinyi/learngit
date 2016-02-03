#include<iostream.h>
class Stack
{
	int stack[15];
	int n;
	int size;
public:
	Stack(int newSize=10)
	{
		size=newSize;
	}
	void push(int x)
	{
		if(n==0){stack[n]=x;n++;}
		else
		{
		n++;
		stack[n]=x;
		}
	}
	int pop(void)
	{
		return(stack[n-1]);
	}
	int stacksize(void)
	{
		return size;
	}
	int stacknum(void)
	{
		return n;
	}
};
main()
{
	int a[5],i;
	Stack S(15);
	for(i=0;i<5;i++)
	{
		a[i]=i;
	}
	for(i=0;i<5;i++)
	{
		S.push(a[i]);
	}
	for(i=0;i<5;i++)
	{
		cout<<S.pop()<<endl;
	}
	cout<<"Num: "<<S.stacknum()<<endl;
	cout<<"Size: "<<S.stacksize()<<endl;
}




