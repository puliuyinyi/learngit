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
    for(j=0;j<n;j++)                        // ����9��ѭ����ʵ��9�˱Ƚ�
	{
		for(i=0;i<n-j;i++)                     // ��ÿһ���н���9-j�αȽ�                  
		{
		if (array[i]>array[i+1])                     // �����������Ƚ� 
	    {t=array[i];array[i]=array[i+1];array[i+1]=t;}
		}
	}
}
