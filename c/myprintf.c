#include <stdio.h>
#include <stdarg.h>

void simple_printf(char * format, ...);
int main(void)
{
	char a[10] = "abdjgh";
	simple_printf("THis is %s%%%c\n",a,'#');
	return 0;
}

void simple_printf(char * format, ...)
{
	char ch;
	va_list ap;
	char * str;

	va_start(ap,format);

	while((ch = *format++) != '\0')
	{
		/* 不是格式符，直接打印 */
		if(ch != '%'){
			putchar(ch);
			continue;
		}

		/* 是格式符 */
		if(*format != '\0'){
			switch(*format++){
				case 'd':
					/* print_integer(va_arg(ap,int)); */
					break;
				case 'f':
					/* print_float(va_arg(ap,float)); */
					break;
				case 'c':
					putchar(va_arg(ap,int));
					break;
				case 's':
					str = va_arg(ap,char *);
					while(*str != '\0')
						putchar(*str++);
					break;
			}
		}
	}
}