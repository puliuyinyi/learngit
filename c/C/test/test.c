#include <stdio.h>

void swap(int x,int y)
{
	int temp;
	
	temp = x;
	x = y;
	y = temp;
	printf("In swap: x = %d,y = %d\n",x,y);
}

void swap_with_pt(int * x,int * y)
{
	int temp;
	
	temp = *x;
	*x = *y;
	*y = temp;
	printf("In swap: x = %d,y = %d\n",*x,*y);
}
/*
int main()
{
	int x = 5,y = 10;
	
	printf("Before swap: x = %d,y = %d\n",x,y);
	swap(x,y);
	printf("After swap: x = %d,y = %d\n",x,y);
	printf("-------------------------------\n");
	printf("Before swap_with_pt: x = %d,y = %d\n",x,y);
	swap_with_pt(&x,&y);
	printf("After swap_with_pt: x = %d,y = %d\n",x,y);
	
	return 0;
}*/