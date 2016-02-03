#include<stdio.h>
#include "pe12-2a.h"
int mode;
int prev_mode = METRIC;
double distance;
double consume;

void set_mode(int m)
{
	extern int mode;
	if(m != METRIC && m != US)
	{
		mode = prev_mode;
		prev_mode = mode;
	}
	else mode = m;
}

void get_info(void)
{
	if(mode == METRIC)
	{
		printf("Enter distance traveled in kilometers: ");
		scanf("%lf",&distance);
		printf("Enter fuel consumed in liters: ");
		scanf("%lf",&consume);
	}
	if(mode == US)
	{
		printf("Enter distance traveled in miles: ");
		scanf("%lf",&distance);
		printf("Enter fuel consumed in gallon: ");
		scanf("%lf",&consume);
	}
}

void show_info(void)
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




