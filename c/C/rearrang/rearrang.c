
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_COLS 20    /* ���ܴ��������к� */
#define MAX_INPUT 1000    /* ÿ�������е���󳤶� */

int read_column_numbers(int columns[], int max);
void rearrange(char * output,char const * input,int n_columns, int const columns[]);

int main(void)
{
		int n_columns;             /* ��Ҫ��������� */
		int columns[MAX_COLS];     /* ���д�����б�� */
		char input[MAX_INPUT];     /* ���������е����� */
		char output[MAX_INPUT];    /* ��������е����� */

		/*
		** ��ȡ�ô��б��
		*/
		puts("Enter column pairs,enter negative number means end(eg: 1 4 6 9 -1):");
		n_columns = read_column_numbers(columns,MAX_COLS);

		/*
		** ��ȡ������ʹ�ӡʣ���������
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
	** ȡ���б��,�������ȡ����С��0��ֹͣ
	*/
	while(num < max && scanf("%d",&columns[num]) == 1 && columns[num] >= 0)
		num++;

	/*
	** ȷ���Ѿ���ȡ�ı��Ϊż����,��Ϊ�������ԶԵ���ʽ���ֵ�
	*/
	//if(num % 2 != 0){
	//	puts("Last column number is not paired.");
	//	exit(EXIT_FAILURE);
	//}

	/*
	** ���������а������һ�����ֵ��ǲ�������
	*/
	while((ch = getchar()) !=EOF && ch != '\n')
		continue;
	
	return num;
}

void rearrange(char * output,char const * input,int n_columns,int const columns[])
{
	int col;           /* columns������±� */
	int output_col;    /* ����м����� */
	int len;           /* �����еĳ��� */

	len = strlen(input);
	output_col = 0;

	/*
	** ����ÿ���б��
	*/
	for(col = 0;col < n_columns;col += 2){
		int nchars;
		if(col != n_columns - 1)
			nchars = columns[col + 1] - columns[col] + 1;
		else
			nchars = len - columns[col];

		/*
		** ��������н���������������������ͽ�������
		*/
		if(columns[col] >= len || output_col == MAX_INPUT - 1)
			break;

		/*
		** �����������ݿռ䲻����ֻ���ƿ������ɵ�����
		*/
		if(output_col + nchars > MAX_INPUT - 1)
			nchars = MAX_INPUT - output_col - 1;

		/*
		** �����������
		*/
		strncpy(output + output_col,input + columns[col],nchars);
		output_col += nchars;
	}

	output[output_col] = '\0';
}