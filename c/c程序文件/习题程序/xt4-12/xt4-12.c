#include <stdio.h>
int main()
{
	float x,y;
	scanf("%f%f",&x,&y);
	if((x-2)*(x-2)+(y-2)*(y-2)<=1||(x+2)*(x+2)+(y-2)*(y-2)<=1||(x-2)*(x-2)+(y+2)*(y+2)<=1||(x+2)*(x+2)+(y+2)*(y+2)<=1)
		printf("h=10 m\n" );
	else 
		printf("h=0 m\n");
	return 0;
}
		

