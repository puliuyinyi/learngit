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
			cout<<"下标越界"<<endl;
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
	cout<<"线性表长度为: "<<list.Len()<<endl;
	cout<<"线性表的元素个数为: ";
	cout<<list.Elem()<<endl;
	cout<<"线性表的元素为: ";
	list.print();
	list.Elem(3u)=100;
	cout<<"线性表下表为3的元素的值为: ";
	cout<<list.Elem(3u)<<endl;
	list.Elem(20);
	list.Elem(200);
	cout<<"现在线性表的长度为: "<<list.Len()<<endl;
	cout<<"现在线性表的元素个数为: ";
	cout<<list.Elem()<<endl;
	cout<<"线性表的元素为: ";
	list.print();
	cout<<"线性表的最后一个元素为: ";
		cout<<list.GetElem(list.Elem()-1)<<endl;
}
