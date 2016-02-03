#include<stdio.h>
int main()
{
    void exchange(int *x);
	void input(int *x);
	void output(int *x);
      int a[10],i;
	  int *p=a;
	  printf("please input 10 numbers:");
	  input(p);
      p=a;
	  exchange(p);
	  printf("The array has been inverted :\n");
	  p=a;
	  output(p);
	  printf("\n");
	  return 0;
}
void exchange(int *x)
{
	int max=*x,min=*x;
	int *i,*j,*m,*n,*k,temp;
	k=x+1;
	i=x;
	j=x+9;
	for(;k<=j;k++)
	   {
	   if(*k>max)
	   {max=*k;m=k;}
	   if(*k<min)
	   {min=*k;n=k;}
	   }
	temp=*i;
	*i=*m;
	*m=temp;
	temp=*j;
	*j=*n;
	*n=temp;
	return;
}
void input(int *x)
{
	int i;
   for(i=0;i<=9;i++,x++)
	      scanf("%d",x);
   return;
}
void output(int *x)
{
	int i;
	for(i=0;i<10;i++,x++)
		  printf("%d ",*x);
	return;
}
