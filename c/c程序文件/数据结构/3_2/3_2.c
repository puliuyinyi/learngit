#include<stdio.h>
#define Stack_Size 50
#define TRUE 1
#define FALSE 0
typedef  int StackElementType;
typedef struct
{
	StackElementType elem[Stack_Size];
	int top;
}SeqStack;
void InitStack(SeqStack *S)
{
	S->top=-1;
}
int Push(SeqStack *S,StackElementType x)
{
	if(S->top==Stack_Size-1)return(FALSE);
	S->top++;
	S->elem[S->top]=x;
	return(TRUE);
}
int Pop(SeqStack *S,StackElementType *x)
{
	if(S->top==-1)
		return(FALSE);
	else
	{
		*x=S->elem[S->top];
		S->top--;
		return(TRUE);
	}
}
int GetTop(SeqStack S)
{
	StackElementType x;
	if(S.top==-1)
		return(FALSE);
	else
	{
		x=S.elem[S.top];
		return(x);
	}
}
int GetNumber(char ch)
{
	int x;
	x=ch-'0';
	return(x);
}
char Compare(char ch1,char ch2)
{
	int f1,f2;
	if(ch1=='#')f1=0;
	if(ch1=='+'||ch1=='-')f1=2;
	if(ch1=='*'||ch1=='/')f1=3;
	if(ch1=='(')f1=4;

    if(ch2=='#')f2=0;
	if(ch2=='+'||ch2=='-')f2=2;
	if(ch2=='*'||ch2=='/')f2=3;
	if(ch2=='(')f1=1;

	if(f1>f2)return('>');
	if(f1<f2)return('<');
	else
		return('=');
}
int Execute(int a,char ch,int b)
{
	int n;
	if(ch=='+')n=a+b;
	if(ch=='-')n=a-b;
	if(ch=='*')n=a*b;
	if(ch=='/')n=a/b;
	return(n);
}
int In(char ch)
{
	if(ch>='0'&&ch<='9')
		return 0;
	else
		return 1;
}
int main()
{
	char ch;
	int n,v,a,b,op;
	SeqStack OPTR,OVS;
	InitStack(&OPTR);
	InitStack(&OVS);
	Push(&OPTR,'#');
	printf("\n\nplease input an expression(Ending with #):");
	ch=getchar();
	while(ch!='#'||GetTop(OPTR)!='#')
	{
		if(!In(ch))
		{
			n=GetNumber(ch);
			Push(&OVS,n);
			ch=getchar();
		}
		if(ch==')')
		{
			Pop(&OPTR,&op);
			Pop(&OVS,&b);
			Pop(&OVS,&a);
			v=Execute(a,op,b);
			Push(&OVS,v);
			Pop(&OPTR,&op);
			ch=getchar();
		}
	 else
	 {
	 switch(Compare(ch,GetTop(OPTR)))
		{
	        case'>':
				    Push(&OPTR,ch);
				    ch=getchar();
				    break;
			 
			case'=':
			case'<':
				    Pop(&OPTR,&op);
			        Pop(&OVS,&b);
			        Pop(&OVS,&a);
				    v=Execute(a,op,b);
			        Push(&OVS,v);
				    break;
		}
	 }
	}
    v=GetTop(OVS);
	printf("The answer is %d\n",v);
	return(0);
}