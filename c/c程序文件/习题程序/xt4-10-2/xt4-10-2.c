#include <stdio.h>
int main()
{
	float i,t;
	int w;
	scanf("%f",&i);
	w=(i/100000);
	switch(w)
	{
	case 0: t=i*0.1;break;
	case 1: t=100000*0.1+(i-100000)*0.075;break;
	case 2:
	case 3:	t=100000*0.1+100000*0.075+(i-200000)*0.05;break;
	case 4:
	case 5:	t=100000*0.1+100000*0.075+200000*0.05+(i-400000)*0.03;break;
	case 6:
	case 7:
	case 8:
	case 9: t=100000*0.1+100000*0.075+200000*0.05+200000*0.03+(i-600000)*0.015;break;
    default: t=100000*0.1+100000*0.075+200000*0.05+200000*0.03+400000*0.015+(i-1000000)*0.01;
	}
		printf("%f\n",t);
		return 0;
	
}