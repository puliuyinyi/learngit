#include<iostream.h>
#include<stdio.h>
#include<string.h>
#define N 100
int M=0;
int T=0;
class LetterCoding
{
	char c;
public:
	void Set(char c1)
	{
		c=c1;
	}
	char Getc(void)
	{
		return c;
	}
	int Getx(void)
	{
		switch(c)
		{
		case 'a':
		case 'b':
		case 'c':return 2;
		case 'd':
		case 'e':
		case 'f':return 3;
		case 'g':
		case 'h':
		case 'i':return 4;
		case 'j':
		case 'k':
		case 'l':return 5;
		case 'm':
		case 'n':
		case 'o':return 6;
		case 'p':
		case 'q':
		case 'r':
		case 's':return 7;
		case 't':
		case 'u':
		case 'v':return 8;
		case 'w':
		case 'x':
		case 'y':
		case 'z':return 9;
		case ' ':return 0;
		default:cout<<'\a';
		}
	}
	int Gety(void)
	{
		switch(c)
		{
		case 'a':
		case 'd':
		case 'g':
		case 'j':
		case 'm':
		case 'p':
		case 't':
		case 'w':
		case ' ':return 1;
		case 'b':
		case 'e':
		case 'h':
		case 'k':
		case 'n':
		case 'q':
		case 'u':
		case 'x':return 2;
		case 'c':
		case 'f':
		case 'i':
		case 'l':
		case 'o':
		case 'r':
		case 'v':
		case 'y':return 3;
		case 's':
		case 'z':return 4;
		default:cout<<'\a';
		}
	}
};
 main()
{
	void input(LetterCoding c[]);
	void print(LetterCoding c[]);
	LetterCoding l[N], *p=l;
	input(p);
	if(!T)
	{
	cout<<"编码如下:"<<endl;
	print(p);
	}
	else
		cout<<"input illegal."<<endl;
	return 0;
}
void input(LetterCoding c[])
{
	int i;
	char ch;
	cout<<"请输入英文句子(输入‘#’代表输入结束):"<<endl;
	for(i=0;i<N;i++)
	{
		ch=getchar();
		if((ch>=97&&ch<=122)||ch==' '||ch=='#')
		{
		if(ch!='#')
		{
			c[i].Set(ch);
			M++;
		}
		else break;
		}
		else
		{T=1;break;}
	}
}
void print(LetterCoding c[])
{
	int i=0;
    cout<<c[i].Getx()<<'-'<<c[i].Gety()<<endl;
	for(i=1;i<M;i++)
	{
		if(c[i].Getx()==c[i-1].Getx())
		{cout<<"0-0"<<endl;}
		cout<<c[i].Getx()<<'-'<<c[i].Gety()<<endl;
	}
}




