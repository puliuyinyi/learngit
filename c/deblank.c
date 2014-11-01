#include <stdio.h>

int is_white(char ch);
void deblank(char string[]);
int main(void)
{
	char a[20] = "q  ta sdfdgk";
	deblank(a);
	puts(a);
	return 0;
}

/*************************************************
  Function:       deblank
  Description:    删除字符串中多余的空白字符
  Calls:          none
  Called By:      none
  Table Accessed: none
  Table Updated:  none
  Input:          char * string 源字符串
  Output:         none
  Return:         none
  Others:         none
*************************************************/
void deblank(char string[])
{
	char * src;
	char * dest;
	char ch;

	src = string;
	dest = string;

	while((ch = *src++) != '\0'){
		if(is_white(ch)){
			char next;
			next = *src;
			if(!is_white(next))
				*dest++ = ch;
		}
		else{
			*dest++ = ch; 
		}
	}
	*dest = '\0';
}
/* 是否是空白字符 */
int is_white(char ch)
{
	return (ch == ' ' || ch == '\t' || ch == '\v' || ch == '\f' || ch == '\n' || ch == '\r');
}