#include <stdio.h>
#include <ctype.h>

#define SIZE sizeof(test) / sizeof(test[0])

int is_not_print(int ch)
{
	return !isprint(ch);
}

static int (*test[])(int) = {iscntrl,isspace,isdigit,islower,isupper,ispunct,is_not_print};
static char * label[] = {"control","whitespace","digit","lower case","upper case","punctuation","non_printable"};
int mains()
{
	
	int count[SIZE] = {0};
	int ch;
	int total = 0;
	int i;

	while((ch = getchar()) != EOF)
	{
		
		
		for(i = 0;i < SIZE;i++)
			if(test[i](ch))
				count[i] += 1;

		total += 1;
	}
	if(total == 0)
		printf("No characters in the input!\n");
	else
	{
		for(i = 0;i < SIZE;i++)
			printf("%.3f%% %s characters\n",count[i] * 100.0 / total,label[i]);
	}
	
	return 0;
}

