#include <stdio.h>
#include <string.h>

const char * keyword[] = {
	"do",
	"for",
	"if",
	"register",
	"return",
	"switch",
	"while",
	NULL
};
int lookup_keyword(const char * const desired_word, const char * keyword_table[]);
int main(void)
{
	char word[] = "shile";
	
	int index = lookup_keyword(word,keyword);
	if(index == -1)
		printf("There are no keywords in desired_word\n");
	else
		printf("%s is keyword,and it's index in keyword_table is %d",word,index);
	return 0;
}

/*************************************************
  Function:       lookup_keyword
  Description:    desired_word字符串是否是关键字
  Calls:          none
  Called By:      none
  Table Accessed: none
  Table Updated:  none
  Input:          const char * const desired_word 字符串
				  const char * keyword_table[] 关键字（字符串）表
                  
  Output:         none
  Return:         返回匹配的关键字（字符串）在关键字表的下标，找不到返回-1
  Others:         none
*************************************************/
int lookup_keyword(const char * const desired_word, const char * keyword_table[])
{
	const char ** kwp;
	
	for(kwp = keyword_table;*kwp != NULL;kwp++)
	{
		if(strcmp(desired_word,*kwp) == 0)
			return (kwp - keyword_table);
	}

	return -1;
}