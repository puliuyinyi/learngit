#include<stdio.h>
int main()
{
	int i,j,L,l,n,s,o;
	char c[3][9];
	printf("�������������֣���8���ַ���:");
		for(i=0;i<=2;i++)
			for(j=0;j<=7;j++)
				scanf("%c",&c[i][j]);
		for(i=0;i<=2;i++)
		{
			L=0,l=0,n=0,s=0,o=0;
			for(j=0;j<=7;j++)
			{
				if(c[i][j]>='A'&&c[i][j]<='Z')L++;
				else if(c[i][j]>='a'&&c[i][j]<='z')l++;
				else if(c[i][j]>='0'&&c[i][j]<='9')n++;
				else if(c[i][j]==' ')s++;
				else o++;
			}
			printf("�� %d �У���д��ĸ��%dСд��ĸ��%d���֣�%d�ո�%d������%d\n",i+1,L,l,n,s,o);
		}
		return 0;
}

	
