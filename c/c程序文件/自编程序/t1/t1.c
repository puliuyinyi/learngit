#include<stdio.h>
#include<stdlib.h>
#define Stack_Size 50
#define Max_Number_Size 20
#define OP_Size 7
#define FALSE 0
#define TRUE 1
#define ERROR -1

const char OPset[OP_Size] ={'+','-','*','/','(',')','#'};

typedef struct
{
	char elem[Stack_Size];
	int top;
}OPStack;
typedef struct
{
	double  elem[Stack_Size];
	int top;
}NUStack;

void InitOPStack(OPStack *S)
{
	S->top = -1;
}

void InitNUStack(NUStack *S)
{
	S->top = -1;
}

int PushOPS(OPStack * S,char x)
{
	if(S->top==Stack_Size-1)
		return FALSE;
	S->top++;
	S->elem[S->top]=x;
	return TRUE;
}

int PushNUS(NUStack * S,double x)
{
	if(S->top==Stack_Size-1)
		return FALSE;
	S->top++;
	S->elem[S->top]=x;
	return TRUE;
}

int PopOPS(OPStack * S,char * x)
{
	if(S->top==-1)
		return FALSE;
	else
	{
		*x = S->elem[S->top];
		S->top--;
		return TRUE;
	}
}

int PopNUS(NUStack * S,double * x)
{
	if(S->top==-1)
		return FALSE;
	else
	{
		*x = S->elem[S->top];
		S->top--;
		return TRUE;
	}
}

char GetTopOPS(OPStack * S)
{
	if(S->top == -1)
		return 'E';
	else
		return  S->elem[S->top];
}

double GetTopNUS(NUStack * S)
{
	if(S->top == -1)
		return FALSE;
	else
		return  S->elem[S->top];
}



int In(char ch,char OPset[],int n)
{
	int i;
	for(i=0;i<n;i++)
		if(ch==OPset[i])
			return TRUE;
	return FALSE;
}

char Compare(char op1,char op2)
{
	int i;
	int op1Num,op2Num;
	char OPpriority[OP_Size][OP_Size] = {
		{'=','=','<','<','>','>','>'},
		{'=','=','<','<','>','>','>'},
		{'>','>','=','=','>','>','>'},
		{'>','>','=','=','>','>','>'},
		{'>','>','>','>','>','>','>'},
		{'<','<','<','<','F','<','<'},
		{'<','<','<','<','<','<','<'}
	};
	for(i = 0;i < OP_Size;i++)
	{
		if(op1 == OPset[i])  {op1Num = i;printf("row:%d",i);}
		if(op2 == OPset[i])  {op2Num = i;printf("  col:%d\n",i);}
	}
	return OPpriority[op1Num][op2Num];
}

double Execute(double a,char op,double b)
{
	switch(op)
	{
		case '+':
			return a+b;
		case '-':
			return a-b;
		case '*':
			return a*b;
		case '/':
			return a/b;
	}

}
	

double ExpEvaluation()
{
	char ch_number[Max_Number_Size];
	int i = 0;
	int j;
	double n;
	double v;
	char ch;
	double a,b;
	int tag = FALSE;
	char op;
	OPStack OPTR;
	NUStack OVS;
	InitOPStack(&OPTR);
	InitNUStack(&OVS);
	PushOPS(&OPTR,'#');
	
	printf("\n\nPlease input an expression(Ending with #): ");
	ch = getchar();
	while(ch!='#' || GetTopOPS(&OPTR)!='#')
	{
		if(In(ch,OPset,OP_Size)==FALSE)
		{
			
			ch_number[i] = ch;
			i++;
			tag = TRUE;
			ch = getchar();
		}
		else
		{
			if(tag==TRUE)
			{
				n = atof(ch_number);
				PushNUS(&OVS,n);
				for(j=0;j<i;j++)
					ch_number[j] = 0;
				i = 0;
				tag = FALSE;
			}
			switch(Compare(ch,GetTopOPS(&OPTR)))
			{
			case '>':
				PushOPS(&OPTR,ch);
				ch = getchar();
				break;
			case '=':
			case '<':
				PopOPS(&OPTR,&op);
				PopNUS(&OVS,&b);
				PopNUS(&OVS,&a);
				v = Execute(a,op,b);
				PushNUS(&OVS,v);
				break;
			case 'F':
				PopOPS(&OPTR,&op);
				ch = getchar();
				break;
			}
		}
	}
	v = GetTopNUS(&OVS);
	return v;
}
int main()
{
	double result;
	result = ExpEvaluation();
	printf("=%.2f\n",result);
	return 0;

}