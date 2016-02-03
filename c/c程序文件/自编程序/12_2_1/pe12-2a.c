#include<stdio.h>
#include "pe12-2a.h"

int set_mode(int * m)
{
	static int prev_mode = METRIC;
	int mode;
	if(*m != METRIC && *m != US)
	{
		mode = prev_mode;
		printf("Invalid mode sprcified. mode %d used.\n",mode);
	}
	else 
		mode = *m;
	prev_mode = mode;
	return mode;
}

void get_info(int mode,double * distance,double * consume)
{
	if(mode == METRIC)
	{
		printf("Enter distance traveled in kilometers: ");
		scanf("%lf",distance);
		printf("Enter fuel consumed in liters: ");
		scanf("%lf",consume);
	}
	if(mode == US)
	{
		printf("Enter distance traveled in miles: ");
		scanf("%lf",distance);
		printf("Enter fuel consumed in gallon: ");
		scanf("%lf",consume);
	}
}

void show_info(int mode,double distance,double consume)
{
	double result;
	if(mode == METRIC)
	{
		result = consume / distance * 100;
		printf("Fuel consumption is %.1f liters per 100km.\n",result);
	}
	if(mode == US)
	{
		result = distance / consume;
		printf("Fuel consumption is %.1f miles per gallon.\n",result);
	}
}




