#include <stdio.h>
int main()
{
	int max(int x, int y,int z);//��������
		int a,b,c,d;
		printf("please input three numbers: ");//��ʾ����������
		scanf("%d,%d,%d",&a,&b,&c);
			d=max(a,b,c); //���ú���
			printf("max=%d\n",d);
			return 0;
}
int max(int x,int y,int z) //���庯��
{
	int w;
	if(x>y>z)w=x;
	else if(y>z)w=y;
	else w=z;
	return(w);
}