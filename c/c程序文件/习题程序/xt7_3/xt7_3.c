#include<stdio.h>
#include<math.h>
int main()
{
	int ss(int y);
	int x,c;
	printf("������һ������: ");
	scanf("%d",&x);
	if(x<=1)printf("�����Ȳ�������Ҳ���Ǻ���\n") ;
	else 
	{c=ss(x);
	if(c==0)printf("����������\n");
	else printf("������������\n");}
}

	int ss(int y)
	{
		int i,s=0;
		for(i=2;i<y;i++)
		{
			if(y%i==0){s=1;break;}
		}
		return(s);
	}

	
