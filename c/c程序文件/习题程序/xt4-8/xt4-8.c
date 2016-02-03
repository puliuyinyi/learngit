#include <stdio.h>
int main()
{
	int m,n;
	printf("Your grade: ");
	scanf("%d",&m);
	if(m>=0&&m<=100)
	{
		n=m/10;
	switch(n)
	{
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5: printf("E\n");break;
	case 6: printf("D\n");break;
	case 7: printf("C\n");break;
	case 8: printf("B\n");break;
	case 9: 
	case 10: printf("A\n");break;
	}
	}
	else printf("error!\nplease put a leagal one.\a\n");
	return 0;
}