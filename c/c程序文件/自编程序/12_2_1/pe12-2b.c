//pe12-2b.c
#include<stdio.h>
#include "pe12-2a.h"
int main(void)
{
	int mode;
	double distance,consume;
	printf("Enter 0 for metric mode, 1 for US mode: ");
	scanf("%d",&mode);
	while(mode >= 0)
	{
		mode = set_mode(&mode);
		get_info(mode,&distance,&consume);
		show_info(mode,distance,consume);
		printf("Enter 0 for metric mode, 1 for US mode: ");
		printf("(-1 to quit): ");
		scanf("%d",&mode);
	}
	printf("Done.\n");
	return 0;
}
