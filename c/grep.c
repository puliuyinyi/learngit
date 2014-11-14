/************************************************************
  Copyright (C), 2014, WangMeng.
  FileName: grep.c
  Author:  WangMeng      Version :  v1.0        Date: 2014-11-14
  Description:     grep命令粗略实现     
  Version:         v1.0
  Function List: 
    1. void search(char * filename, FILE * stream, char * string)
  History:         
      <author>  <time>   <version >   <desc>
      WangMeng  14-11-14     1.0     build this moudle 
***********************************************************/

#define BUFFER_SIZE 512
void search(char * filename, FILE * stream, char * string);

/*************************************************
 eg: grep hello filename1 filename2 filename3 ...
 搜索“filename1 filename2 filename3 ...” 中包含“hello”的行
*************************************************/
int main(int ac, char ** av)
{

	char * string;
	if(ac <= 1)
	{
		fprintf(stderr,"Usage fgrep string file...\n");
		exit(1);
	}

	string = *++av;
	if(ac <= 2)
		search(NULL,stdin,string);
	else
	{
		while(*++av != NULL)
		{
			FILE * file;
			file = fopen(*av,"r");
			if(file == NULL)
				perror(*av);
			else
			{
				search(*av,file,string);
				fclose(file);
			}
		}
	}
	printf("\n");
	return 0;
}

/*************************************************
  Function:       search
  Description:    文件中包含指定字符串
  Calls:          none
  Called By:      none
  Table Accessed: none
  Table Updated:  none
  Input:          char * filename 文件名
                  FILE * stream 文件流
				  char * string 指定字符串
  Output:         文件中包含指定字符串的行
  Return:         none
  Others:         每行字符不超过511个（包括换行符）
*************************************************/
void search(char * filename, FILE * stream, char * string)
{
	char buffer[BUFFER_SIZE];
	int count_lines = 0;
	while(fgets(buffer,BUFFER_SIZE,stream) != NULL)
	{
		count_lines++;
		if(strstr(buffer,string) != NULL)
		{
			if(filename != NULL)
				printf("%s: %d lines: ",filename,count_lines);
			fputs(buffer,stdout);
		}
	}
}