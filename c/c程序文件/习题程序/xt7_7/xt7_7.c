
#include<stdio.h>
int main()
{
   void y(char s1[],char s2[]);
	char s1[40],s2[40];
	printf("������һ���ַ���: ");
	scanf("%s",s2);
	y(s1,s2);
	printf("���ַ���:%s\n",s1);
	return 0;
}
void y(char s1[],char s2[])
{
	int i=0,j=0;
	while(s2[i]!='/0')
	{
		if((s2[i]=='a')||(s2[i]=='e')||(s2[i]=='i')||(s2[i]=='o')||(s2[i]=='u'))
		{s1[j]=s2[i];
		j=j+1;}
		i=i+1;
	}

}		
