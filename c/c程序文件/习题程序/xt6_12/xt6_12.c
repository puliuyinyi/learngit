#include<stdio.h>
int main()
{
    int i;
	char c[]={"ABXzealfife.,'r"};
    printf("����: ");
	for(i=0;i<=14;i++)
		printf("%c",c[i]);
	printf("\n");
	  for(i=0;i<=14;i++)
	  {if(c[i]>='A'&&c[i]<='Z')c[i]=155-c[i];
		  else if(c[i]>='a'&&c[i]<='z')c[i]=219-c[i];}
	  printf("ԭ��: ");
	  for(i=0;i<=14;i++)
		  printf("%c",c[i]);
	  printf("\n");
	  return 0;
}