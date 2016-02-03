/*invert4.c*/
#include <stdio.h>
char * itobs(short,char *);
void show_bstr(const char *);
short invert_end(short num,short bits);
int main()
{
	char bin_str[8 * sizeof(short) + 1];
	short number;
	puts("Enter integers and see them in binary.");
	puts("Non-numeric input terminates program.");
	while(scanf("%d",&number) == 1)
	{
		itobs(number,bin_str);
		printf("%d is ",number);
		show_bstr(bin_str);
		number = invert_end(number,2);
		printf("\ninverting the last 2 bits gives\n     ");
		itobs(number,bin_str);
		show_bstr(bin_str);
		putchar('\n');
	}
	puts("Bye.");
	return 0;
}

char * itobs(short n,char *ps)
{
	short i;
	static short size = 8 * sizeof(short);
	for(i = size - 1;i >= 0;i--)
	{
		ps[i] = (01 & n) +'0';
		n >>= 1;
	}
	ps[size] = '\0';
	return ps;
}

void show_bstr(const char * str)
{
	short i = 0;
	while(str[i])
	{
		putchar(str[i]);
		if(++i % 4 == 0 && str[i])
		putchar(' ');
	}
	
	
}
short invert_end(short num,short bits)
{
	short mask = 0;
	short bitval = 1;
	while(bits-- > 0)
	{
		mask = mask | bitval;
		bitval = bitval << 1;
	}
	return num ^ mask;
}

