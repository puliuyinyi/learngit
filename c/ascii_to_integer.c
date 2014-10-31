#include <stdio.h>
#include <ctype.h>

int ascii_to_integer(char * string);
int main(void)
{
	int integer = ascii_to_integer("43");
	printf("%d\n",integer);
	return 0;

}

/*************************************************
  Function:       ascii_to_integer
  Description:    数字字符串转换为整型
  Calls:          none
  Called By:      none
  Table Accessed: none
  Table Updated:  none
  Input:          char * string 
  Output:         none
  Return:         整数
  Others:         none
*************************************************/
int ascii_to_integer(char * string)
{
	int ch;
	int flag = 1;
	int result = 0;

	while((ch = *string) != '\0')
	{
		if(!isdigit(ch)){
			flag = 0;
			break;
		}
		result = (ch - '0') + result * 10;
		string++;
	}

	if(flag)
		return result;
	else
		return 0;
}
