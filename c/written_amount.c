/*数字的英文读法，比如1234，对应 "ONE THOUSAND TWO HUNDRED THIRTY FOUR"*/
#include <string.h>

static char * digits[] = {
	"","ONE ", "TWO ","THREE ","FOUR ","FIVE ","SIX ","SEVEN ","EIGHT ","NINE ","TEN ","ELEVEN ","TWELVE ","THIRTEEN ",
	"FOURTEEN ","FIFTEEN ","SIXTEEN ","SEVENTEEN ","EIGHTEEN ","NINETEEN "
};

static char * tens[] = {
	"", "", "TWENTY ", "THIRTY ", "FORTY ", "FIFTY ", "SIXTY ", "SEVENTY ","EIGHTY ", "NINETY "
};

static char * magnitudes[] = {
	"", "THOUSAND ", "MILLION ", "BILLION "
};


static void do_one_group(unsigned int amount, char * buffer, char ** magnitude)
{
	int value;
	value = amount / 1000;
	if(value > 0)
		do_one_group(value,buffer,magnitude + 1);

	amount = amount % 1000;
	value = amount / 100;
	
	if(value > 0){
		strcat(buffer, digits[value]);
		strcat(buffer,"HUNDRED ");

	}

	value = amount % 100;
	if(value >= 20){
		strcat(buffer,tens[value / 10]);
		value %= 10;	
	}
	
	if(value > 0)
		strcat(buffer,digits[value]);

	if(amount > 0)
		strcat(buffer,*magnitude);
}

/*************************************************
  Function:       written_amount
  Description:    数字的英文读法
  Calls:          do_one_group()
  Called By:      none
  Table Accessed: none
  Table Updated:  none
  Input:          unsigned int amount 输入数字
                  
  Output:         char * buffer 存储数字的对应英文读法
  Return:         none
  Others:         none
*************************************************/
void written_amount( unsigned int amount, char *buffer )
{
	if( amount == 0 )
	/*
	** Special case for zero.
	*/
		strcpy( buffer, "ZERO " );
	else {
	/*
	** Store an empty string in the buffer, then begin.
	*/
		*buffer = '\0';
		do_one_group( amount, buffer, magnitudes );
	}
}