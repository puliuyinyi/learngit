#include<stdio.h>
int main()
{
	int a[15]={15,14,13,12,11,10,9,8,7,6,5,4,3,2,1},t=1,s=8,i,x;
	 for(i=0;i<=14;i++)
		 printf("%d ",a[i]);
	 printf("\n");
	 printf("请输入一个数: ");
      scanf("%d",&x);
	 do
	 {
		 if(x>a[s])
		 {s=s-4/t;
		 t=t*2;}
		 if(x<a[s])
		 {s=s+4/t;
		 t=t*2;}
	 }while(t<=4&&x!=a[s]);
		 if(x==a[s])
			 printf("该数是数组第 %d 个数\n",s+1);
		 else
			 printf("无此数\n");
	return 0;
}

	    