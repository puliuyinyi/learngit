#include<stdio.h>
#include<string.h>
int main()
{
	int s1[40],s2[40],i;
	printf("������һ���ַ�s2: ");
	 gets(s2);
	 for(i=0;i<=39;i++)
	 {
		 s1[i]=s2[i];
	     if(s2[i]='\0')break;
	 }
	 printf("�ַ���s1: ");
    puts(s1);
	return 0;
}

	    
		 
	
