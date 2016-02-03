
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_COLS 20    /* 所能处理的最大列号 */
#define MAX_INPUT 1000    /* 每个输入行的最大长度 */

int read_column_numbers(int columns[], int max);
void rearrange(char * output,char const * input,int n_columns, int const columns[]);

int main(void)
{
		int n_columns;             /* 需要处理的列数 */
		int columns[MAX_COLS];     /* 进行处理的列标号 */
		char input[MAX_INPUT];     /* 容纳输入行的数组 */
		char output[MAX_INPUT];    /* 容纳输出行的数组 */

		/*
		** 读取该串列标号
		*/
		puts("Enter column pairs,enter negative number means end(eg: 1 4 6 9 -1):");
		n_columns = read_column_numbers(columns,MAX_COLS);

		/*
		** 读取、处理和打印剩余的输入行
		*/
		puts("Enter strings,only enter [Enter] means end:");
		while(gets(input) != NULL && input[0] != '\0'){
			printf("Original input : %s\n",input);
			rearrange(output,input,n_columns,columns);
			printf("Rearranged line : %s\n",output);
		}
		
		return EXIT_SUCCESS;
}

int read_column_numbers(int columns[], int max)
{
	int num = 0;
	int ch;

	/*
	** 取得列标号,如果所读取的数小于0则停止
	*/
	while(num < max && scanf("%d",&columns[num]) == 1 && columns[num] >= 0)
		num++;

	/*
	** 确认已经读取的标号为偶数个,因为它们是以对的形式出现的
	*/
	//if(num % 2 != 0){
	//	puts("Last column number is not paired.");
	//	exit(EXIT_FAILURE);
	//}

	/*
	** 丢弃该行中包含最后一个数字的那部分内容
	*/
	while((ch = getchar()) !=EOF && ch != '\n')
		continue;
	
	return num;
}

void rearrange(char * output,char const * input,int n_columns,int const columns[])
{
	int col;           /* columns数组的下标 */
	int output_col;    /* 输出列计数器 */
	int len;           /* 输入行的长度 */

	len = strlen(input);
	output_col = 0;

	/*
	** 处理每对列标号
	*/
	for(col = 0;col < n_columns;col += 2){
		int nchars;
		if(col != n_columns - 1)
			nchars = columns[col + 1] - columns[col] + 1;
		else
			nchars = len - columns[col];

		/*
		** 如果输入行结束或输出行数组已满，就结束任务
		*/
		if(columns[col] >= len || output_col == MAX_INPUT - 1)
			break;

		/*
		** 如果输出行数据空间不够，只复制可以容纳的数据
		*/
		if(output_col + nchars > MAX_INPUT - 1)
			nchars = MAX_INPUT - output_col - 1;

		/*
		** 复制相关数据
		*/
		strncpy(output + output_col,input + columns[col],nchars);
		output_col += nchars;
	}

	output[output_col] = '\0';
}