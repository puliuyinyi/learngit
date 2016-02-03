#include <stdio.h>
#include <string.h>

void showMeau(void);
void show_cstyle(unsigned int n);
int getlet(const char * s);
unsigned int change_id(unsigned int x);
unsigned int change_size(unsigned int x);
unsigned int change_alignment(unsigned int x);
unsigned int change_bold(unsigned int x);
unsigned int change_italic(unsigned int x);
unsigned int change_underline(unsigned int x);
int invert_end(int num,int bits);
int main()
{
	unsigned int cstyle = 0x00000C01;
	int choice;
	show_cstyle(cstyle);
	showMeau();
	while((choice = getlet("fsabiuq")) && choice != 'q')
	{
		switch(choice)
		{
			case 'f':
				cstyle = change_id(cstyle);
				break;
			case 's':
				cstyle = change_size(cstyle);
				break;
			case 'a':
				cstyle = change_alignment(cstyle);
				break;
			case 'b':
				cstyle = change_bold(cstyle);
				break;
			case 'i':
				cstyle = change_italic(cstyle);
				break;
			case 'u':
				cstyle = change_underline(cstyle);
				break;
			default:
				printf("Error in switch.\n");
		}
		show_cstyle(cstyle);
		showMeau();
	}
	puts("Bye!");
	return 0;
}


void showMeau(void)
{
	puts("f) change font	s) change size  	a) change alignment");
	puts("b) toggle bold	i) toggle italic    u) toggle underline");
	puts("q) quit");
}

void show_cstyle(unsigned int n)
{
	unsigned int mask1 = 0x000000FF;
	unsigned int mask2 = 0x00007F00;
	unsigned int mask3 = 0x00018000;
	unsigned int mask4 = 0x00020000;
	unsigned int mask5 = 0x00040000;
	unsigned int mask6 = 0x00080000;
	puts("ID	SIZE	ALIGNMENT	B	I	U");
	printf("%d	",mask1 & n);
	printf("%d	",(mask2 & n) >> 8);
	if((mask3 & n) == 0x00000000)
		printf("left	");
	else if((mask3 & n) == 0x00008000)
		printf("center	");
	else
		printf("right	");
	if((mask4 & n) == 0x00020000)
		printf("on	");
	else
		printf("off	");
	if((mask5 & n) == 0x00040000)
		printf("on	");
	else
		printf("off	");
	if((mask6 & n) == 0x00080000)
		printf("on	");
	else
		printf("off	");
	printf("\n");
}

int getlet(const char * s)
{
	char c;
	c = getchar();
	while (strchr(s, c) == NULL)
	{
		printf ("Enter a character in the list %s\n", s);
		while( getchar() != '\n')
			continue;
		c = getchar();
	}
	while (getchar() != '\n')
		continue;
	return c;
}

unsigned int change_id(unsigned int x)
{
	unsigned int newid;
	printf("Enter font size (0~255): ");
	while((scanf("%d",&newid)) != 1)
		printf("input a valid value: ");
	x = x | newid;
	newid = invert_end(newid,8);
	x = x & (~newid); 
	getchar();
	return x;
}

unsigned int change_size(unsigned int x)
{
	unsigned int newsize;
	printf("Enter font size (0~127): ");
	while((scanf("%d",&newsize)) != 1)
		printf("input a valid value: ");
	x = x & (~0x00007F00);
	x = x | (newsize << 8);
	getchar();
	return x;
}

unsigned int change_alignment(unsigned int x)
{
	unsigned int mask_1 = 0x00018000;
	unsigned int mask_2 = 0x00008000;
	unsigned int mask_3 = 0x00010000;
	char ch;
	puts("Select alignment:");
	puts("l) left	c) center	r) right");
	ch = getlet("lcr");
	switch(ch)
	{
		case 'l':
			x = x & (~mask_1);
			break;
		case 'c':
			x = x | mask_2;
			x = x & (~mask_3);
			break;
		case 'r':
			x = x | mask_3;
			x = x & (~mask_2);
			break;
		default:
			printf("Error in switch.\n");
			
	}
	return x;
}

unsigned int change_bold(unsigned int x)
{
	unsigned int mask = 0x00020000;
	if((x & mask) == mask)
		x = x & (~mask);
	else
		x = x | mask;
	return x;
}
unsigned int change_italic(unsigned int x)
{
	unsigned int mask = 0x00040000;
	if((x & mask) == mask)
		x = x & (~mask);
	else
		x = x | mask;
	return x;
}
unsigned int change_underline(unsigned int x)
{
	unsigned int mask = 0x00080000;
	if((x & mask) == mask)
		x = x & (~mask);
	else
		x = x | mask;
	return x;
}


int invert_end(int num,int bits)
{
	int mask = 0;
	int bitval = 1;
	while(bits-- > 0)
	{
		mask |= bitval;
		bitval <<= 1;
	}
	return num ^ mask;
	
}