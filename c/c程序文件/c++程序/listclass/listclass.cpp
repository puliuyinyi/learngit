#include<iostream.h>
class ListClass
{
	int *ListPtr;
	int nLen;
	int nElem;
public:
	ListClass(int n=10)
	{
		nElem=0;
		nLen=n;
		if(n)
			ListPtr=new int[n];
		else
			ListPtr=0;
	}
	~ListClass(void)
	{delete[nLen]ListPtr;}
	int Elem(int);
	int &Elem(unsigned n)
	{return ListPtr[n];}
	int Elem(void)
	{return nElem;}
	int Len(void)
	{return nLen;}
	int GetElem(int i)
	{
		if((i>=0)&&(i<nElem))
			return ListPtr[i];
		else
		{
			cout<<"�±�Խ��"<<endl;
			return(-1);
		}
	}
	void print(void);
};
int ListClass::Elem(int elem)
{
	if(nElem==nLen)
	{
		int *newptr;
		newptr=new int[nLen+10];
		for(int i=0;i<nElem;i++)
			newptr[i]=ListPtr[i];
		delete[nLen]ListPtr;
		nLen+=10;
		ListPtr=newptr;
	}
	ListPtr[nElem++]=elem;
	return(nElem);
}
void ListClass::print(void)
{
	for(int i=0;i<nElem;i++)
		cout<<ListPtr[i]<<'\t';
	cout<<endl;
}
void main(void)
{
	ListClass list(6);
	for(int i=0;i<5;i++)
		list.Elem(i);
	cout<<"���Ա���Ϊ: "<<list.Len()<<endl;
	cout<<"���Ա��Ԫ�ظ���Ϊ: ";
	cout<<list.Elem()<<endl;
	cout<<"���Ա��Ԫ��Ϊ: ";
	list.print();
	list.Elem(3u)=100;
	cout<<"���Ա��±�Ϊ3��Ԫ�ص�ֵΪ: ";
	cout<<list.Elem(3u)<<endl;
	list.Elem(20);
	list.Elem(200);
	cout<<"�������Ա�ĳ���Ϊ: "<<list.Len()<<endl;
	cout<<"�������Ա��Ԫ�ظ���Ϊ: ";
	cout<<list.Elem()<<endl;
	cout<<"���Ա��Ԫ��Ϊ: ";
	list.print();
	cout<<"���Ա�����һ��Ԫ��Ϊ: ";
		cout<<list.GetElem(list.Elem()-1)<<endl;
}
