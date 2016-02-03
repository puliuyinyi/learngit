#include<stdio.h>
int main()
{
	void sort(int array[],int n);
    int a[10],i;
	printf("please input 10 numbers:\n    ");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	sort(a,10);
    printf("the sorted numbers :\n");
	for(i=0;i<10;i++)
		printf("%5d",a[i]);
	printf("\n");
	return 0;
}
void sort(int array[],int n)
{
   
   int i,j,t;
    for(j=0;j<n;j++)                        // 进行9次循环，实现9趟比较
	{
		for(i=0;i<n-j;i++)                     // 在每一趟中进行9-j次比较                  
		{
		if (array[i]>array[i+1])                     // 相邻两个数比较 
	    {t=array[i];array[i]=array[i+1];array[i+1]=t;}
		}
	}
}
