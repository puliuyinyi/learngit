#include <stdio.h>
#include <string.h>
#include <ctype.h>
unsigned int my_strlen(char string[], int length);
char * my_strcpy(char * dst,const char * src, int size);
char * my_strcat(char * dst,const char * src, int size);
const char * my_strrchr(const char * str, int ch);
const char * my_strrchr2(const char * str, int ch);
const char * my_strnchr(const char * str, int ch,int which);
int count_chars(const char * str, const char * chars);
int palindrome(char * string);
void count_the(void);
int prepare_key(char * key);
void delete_char(char * string, char ch);
void encrypt(char * data, const char * key);
void decrypt(char * data, const char * key);


/*加密(<<POINTERS ON C>> Chapter 9.12/13/14 at page 190) */
int prepare_key(char * key)
{
	char letter[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ch;
	char * p;
	p = key;
	
	/*  */
	if(p == NULL || *p == '\0')
		return 0;
	/* to all charters Upper 
	   检查是否有非法字符
	*/
	while(*p != '\0')
	{
		if(!isalpha(*p))
			return 0;
		*p = toupper(*p);
		p++;
	}

	p = key;
	while((ch = *p) != '\0')
	{
		p++;
		delete_char(p,ch);
	}
	
	p = key;
	while((ch = *p++) != '\0')
	{
		delete_char(letter,ch);
	}

	strcat(key,letter);

	
	return 1;
}
void encrypt(char * data, const char * key)
{
	while(*data)
	{
		if(!isalpha(*data))
		{
			data++;
			continue;
		}

		if(isupper(*data))
			*data = *(key + (*data - 'A') );
		else
		{
			*data = *(key + (*data - 'a'));
			*data = tolower(*data);
		}
		data++;
	}
}
void decrypt(char * data, const char * key)
{
	char * p;
	while(*data)
	{
		if(!isalpha(*data))
		{
			data++;
			continue;
		}

		if(isupper(*data))
		{
			p = strchr(key, *data);
			*data = p - key + 'A';
		}
		else
		{
			p = strchr(key, toupper(*data));
			*data = p - key + 'a';
		}
		data++;
	}

}
void delete_char(char * string, char ch)
{
	char * pre_ch;
	char * deleted_ch;
	
	pre_ch = string;
	deleted_ch = string;

	while(*pre_ch != '\0'){
		if(*pre_ch == ch)
			*pre_ch++;
		else
			*deleted_ch++ = *pre_ch++;
	}
	*deleted_ch = '\0';
}

/* 计算单词'the'的数量(<<POINTERS ON C>> Chapter 9.11 at page 189)*/
void count_the(void)
{
	char const whitespace[] = " \n\r\f\t\v";

	char buffer[101];
	int count;
	count = 0;
	puts("Enter a string(end with 'EOF'): ");
	while(gets(buffer))
	{
		char * word;

		word = strtok(buffer,whitespace);
		while(word != NULL)
		{
			if(strcmp(word,"the") == 0)
				count += 1;
			word = strtok(NULL,whitespace);
		}
	}
	printf("%d\n",count);
}

/*是否是回文(<<POINTERS ON C>> Chapter 9.10 at page 189)*/
int palindrome(char * string)
{
	char * head = string;
	char * rear = string;
	int flag = 0;

	while(*rear++);
	rear -= 2;

	while(1)
	{
		while(!isalpha(*head))
			head++;
		while(!isalpha(*rear))
			rear--;
		if( head >= rear)
			break;
		if(toupper(*head) != toupper(*rear))
		{
			flag = 1;
			break;
		}
		
		head++;
		rear--;
	}

	if(flag)
		return 0;
	else
		return 1;
	
}

/*(<<POINTERS ON C>> Chapter 9.2 at page 189)*/
unsigned int my_strlen(const char string[], int length)
{
	int len = 0;

	while(*string++ != '\0' && len < length)
		len += 1;
	
	if(len >= length)
		return length;
	else
		return len;

}

/*(<<POINTERS ON C>> Chapter 9.3 at page 189)*/
char * my_strcpy(char * dst,const char * src, int size)
{
	strncpy(dst,src,size);
	dst[size - 1] = '\0';
	return dst;
}

/*(<<POINTERS ON C>> Chapter 9.4 at page 189)*/
char * my_strcat(char * dst,const char * src, int size)
{
	int length;	        //length: dst剩余可用空间大小
	size = size - 1;	//size代表dst数组的最大下标';
	length = size - (int)my_strlen(dst,size);	
	if(length > 0){
		strncat(dst,src,length);
		dst[size] = '\0';
	}

	return dst;
}

/*(<<POINTERS ON C>> Chapter 9.5 at page 189)*/
void my_strncat(char * dest,const char * src, int dest_len)
{
	 int size = dest_len - strlen(dest) - 1;
	 if(size > 0)
	 {
		 strncat(dest,src,size);
	 }
}

/*指向字符串末尾(即NUL)(<<POINTERS ON C>> Chapter 9.6 at page 189)*/
char * my_strcpy_end(char * dest,const char * src)
{
	while((*dest++ = *src++) != '\0');
	return (dest - 1);
}

/*返回str中ch最后一次出现的位置(<<POINTERS ON C>> Chapter 9.7 at page 189)*/
const char * my_strrchr(const char * str, int ch)
{
	const char * res = NULL;
	while(*str != '\0')
	{
		if(ch == *str)
			res = str;
		str++;
	}

	return res;
}
/*同上*/
const char * my_strrchr2(const char * str, int ch)
{
	const char * res = NULL;
	while((str = strchr(str,ch)) != NULL)
	{
		res = str;
		str += 1;
	}
	return res;
}

/*返回第which个匹配ch的位置(<<POINTERS ON C>> Chapter 9.8 at page 189)*/
const char * my_strnchr(const char * str, int ch, int which)
{
	int flag = 0;
	int time = 0;
	const char * res = NULL;

	if(which < 1)
		return NULL;

	while(*str != '\0'){
		if(ch == *str){
			res = str;
			time += 1;
			if(time == which){
				flag = 1;
				break;
			}
		}
		str++;
	}

	if(flag)
		return res;
	else
		return NULL;
}

/*返回str中包含chars的数量(<<POINTERS ON C>> Chapter 9.9 at page 189)*/
int count_chars(const char * str, const char * chars)
{
	int count = 0;
	char ch;

	while(ch = *str++)
	{
			if(strchr(chars,ch))
				count++;
	}

	return count;
}