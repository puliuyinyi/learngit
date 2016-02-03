#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <setjmp.h>
#include <assert.h>
#include "sll_node.h"
#include "concordance_list.h"
#include "stack.h"
#include "queue.h"
#include "tree.h"

#define SQUARE(x) ((x) * (x))
#define PSQR(x,FORMAT)\
	printf("The square of "#x" is " FORMAT ".\n",SQUARE(x))
#define TES 1
#define DEBUG_PRINT(FORMAT,EXPR) printf("File : %s Line: %d "#EXPR" = "FORMAT"\n",__FILE__,__LINE__,EXPR)
#define MAX_LINE_LENGTH 1024

void dollars(char * dest, const char * src);
int * init_array(void);
char * copy_string(void);

/*(<<POINTERS ON C>> Chapter 14.1 at page 295)*/
void print_ledger(int n)
{
#ifdef OPTION_LONG
	#define OK 1
	//print_ledger_long(n);
	printf("This is long.\n");
#endif
#ifdef OPTION_DETAIlED
	#define OK 1
	//print_ledger_detailed(n);
	printf("This is detailed.\n");
#endif
#ifndef OK
	//print_ledger_default(n);
	printf("This is default.\n");
#endif

}


/*复制文本文件*/
void copylines(FILE * input, FILE * output)
{
	char buffer[MAX_LINE_LENGTH];
	while(fgets(buffer,MAX_LINE_LENGTH,input) != NULL)
	{
		fputs(buffer,output);
	}
}

/*(<<POINTERS ON C>> Chapter 15.7 at page 323)*/
/*void ages(void)
{
#define BUFFER_SIZE 512
	char buffer[BUFFER_SIZE];
	FILE * input;
	input = fopen("test_IO","r");
	
	while(fgets(buffer,BUFFER_SIZE,input) != NULL)
	{
		int age[10];
		int members;
		int sum;
		int i;
		members = sscanf(buffer,"%d %d %d %d %d %d %d %d %d %d",age,age + 1,age + 2,age + 3,age + 4,age + 5,age + 6,age + 7,age + 8,age + 9);
		if(members == 0)
			continue;
		sum = 0;
		for(i = 0;i < members;i++)
		{
			sum += age[i];
		}
		printf("%5.2f: %s",(double)sum / members,buffer);

	}
#undef BUFFER_SIZE
}
*/

#define BUFFER_SIZE 512


//#define BUFFER_SIZE 64
/*void dump(FILE * stream)
{
	long offset;
	unsigned char data[16];
	int len;
	char buffer[BUFFER_SIZE];

	memset(buffer,' ',BUFFER_SIZE - 1);
	buffer[45] = '*';
	buffer[62] = '*';
	buffer[BUFFER_SIZE - 1] = '\0';

	offset = 0;
	while((len = fread(data,1,16,stream)) > 0)
	{
		char * hex_ptr;
		char * char_ptr;
		int i;

		sprintf(buffer,"%06X",offset);

		hex_ptr = buffer + 8;
		char_ptr = buffer + 46;
		memset(hex_ptr,' ',35);
		memset(char_ptr,' ',16);

		for(i = 0;i < len;i++)
		{
			sprintf(hex_ptr,"%02X",data[i]);
			hex_ptr += 2;
			*hex_ptr = ' ';

			if(i % 4 == 3)
				hex_ptr++;

			if( isprint( data[ i ] ) || data[ i ] == ' ')
				*char_ptr++ = data[ i ];
			else
				*char_ptr++ = '.';
		}
		puts(buffer);
		offset += len;
	}
}*/


jmp_buf jbuf;

  
void insertion_sort(void * base, size_t n_elements, size_t el_size, int (*compare)(const void *,const void *))
{
	char * arr;  //数组
	char * temp; //临时数据
	int i;
	int next_element;

	arr = (char *)base;
	temp = (char *)malloc(el_size);
	assert(temp != NULL);

	for(next_element = 1;next_element < n_elements;next_element++)
	{
		/*next_element 标示当前处理元素的下标*/
		char * i_ptr = arr; //用于遍历元素，找到合适插入点后--标示插入到该下标元素之前
		char * next_ptr = arr + next_element * el_size; //当前预处理元素

		/*找到合适的插入点*/
		for(i = 0;i < next_element;i++,i_ptr += el_size)
		{
			if(compare(i_ptr,next_ptr) > 0)
				break;
		}
		/*i 或 i_ptr 标示插入到对应元素之前*/

		/*插入到最后的情况,即没有比当前元素大的，对当前元素不做处理*/
		if(i == next_element)
			continue;

		/*一般情况*/
		memcpy(temp,next_ptr,el_size);  //将当前元素复制到temp
		memmove(i_ptr + el_size,i_ptr,(next_element - i) * el_size); //移动i_ptr之后的元素
		memcpy(i_ptr,temp,el_size); //将当前元素插入到合适位置
	}
	free(temp);
}


char * my_strstr(const char * s1,const char * s2)
{
	int n;
	if(*s2)	//s2是否为NULL
	{
		while(*s1)
		{
			n = 0;
			while(*(s1 + n) == *(s2 + n))
			{
				if(!*(s2 + n + 1))
					return (char *)s1;
				n += 1;
			}
			s1++;
		}
		return NULL;
	}
	else
		return (char *)s1;	//s2为空则返回s1
}

int main(int ac, char ** av)
{
#ifndef TES
	int a = 5;
	int n = SQUARE(13);
	printf("%d\n",n);
	PSQR(4.25,"%g");
#endif
	
	//printf("%d",sizeof(u));
	/*int i;
	BSTree test;
	int arr[] = {20,15,18,32,5,91,-4,76,33,41,34,21,90};
	int size = sizeof(arr) / sizeof(arr[0]);
	init_tree(&test);
	

	for(i = 0;i < size;i++)
		insert_tree(&test,arr[i]);
	
	level_traversal_tree(&test);*/
	/*set_buffer();
	printf("%d plus %d equals %d\n",a,b,a + b);
	longjmp(jbuf,1);
	printf("After longjmp\n");*/	

	char * arr = my_strstr("abcde","bc");
	puts(arr);
	printf("\n");
	return 0;
}



/*(<<POINTERS ON C>> Chapter 13.4 at page 276)*/
void swap(char * i, char * j, int size)
{
	char temp;
	while(size-- > 0)
	{
		temp = *i;
		*i = *j;
		*j = temp;
		i++;
		j++;
	}
}
void sort(char * arr, int len, int single_len, int (*compare)(char *,char *))
{
	char * i;
	char * j;
	char * last;
	last = arr + (len - 1) * single_len;
	
	for(i = arr;i < last;i += single_len)
		for(j = i + 1;j <= last;j += single_len)
			if(compare(i,j) > 0)
			{
				swap(i,j,single_len);
			}
}

/*(<<POINTERS ON C>> Chapter 13.2 at page 275)*/
void traverse(Node * root, void (*fun)(Node * p))
{
	while(root != NULL)
	{
		fun(root);
		root = root->next;
	}
}

#define DELTA2 5
char * copy_string(void)
{
	char * rs;
	char * buffer;
	int buffer_size;
	int length;
	int ch;

	length = 0;
	buffer_size = DELTA2;
	buffer = (char *)malloc(buffer_size * sizeof(char));

	while((ch = getchar()) != '\0' && ch != '\n' && ch != EOF)
	{
			length += 1;

			if(length >= buffer_size)
			{
				buffer_size += DELTA2;
				buffer = (char *)realloc(buffer,buffer_size * sizeof(char));
				if(buffer == NULL)
					return NULL;
			}
			buffer[length - 1] = ch;
	}
	buffer[length] = '\0';

	rs = (char *)malloc((length + 1) * sizeof(char));
	if(buffer == NULL)
		return NULL;
	strcpy(rs,buffer);

	return rs;
}

/*(<<POINTERS ON C>> Chapter 11.2 at page 233)*/
#define DELTA 5
int * init_array(void)
{
	int * arr;
	int size;
	int count = 0;
	int value;
	int i;

	size = DELTA;
	arr = (int *)malloc(size * sizeof(int));
	if(arr == NULL)
		return NULL;
	printf("Enter numbers dinstinct with space end with EOF:\n");
	while(scanf("%d",&value) == 1)
	{
		count += 1;
		if(count + 1 > size)
		{
			size += DELTA;
			arr = (int *)realloc(arr,size * sizeof(int));
			if(arr == NULL)
				return NULL;
		}
		arr[count] = value;
	}

	/*释放多余空间*/
	if(count + 1 < size)
	{
		//printf("释放了多余空间...\n");
		arr = (int *)realloc(arr, (count + 1) * sizeof(int));
		if(arr == NULL)
			return NULL;
	}
	arr[0] = count;
	for(i = 0;i <= count;i++)
		printf("%d ",arr[i]);
	return arr;
}

/*(<<POINTERS ON C>> Chapter 11.1 at page 233)*/
void * my_calloc(unsigned int count, unsigned int size)
{
	char * rs;
	char * ptr;
	rs = (char *)malloc(count * size);
	if(rs != NULL)
	{
		for(ptr = rs;ptr < ptr + size;ptr++)
			*ptr = '\0';
	}
	return rs;
}

void dollars(char * dest, const char * src)
{
	int length = strlen(src);

	int count_of_symbol = length / 3;
	int start_symbol = length % 3;

	int index = 3 - start_symbol;
	int re_symbol = count_of_symbol;

	if(length == 0)
	{
		strcpy(dest,"$0.00");
		return;
	}
	if(length == 1)
	{
		strcpy(dest,"$0.0");
		dest += 4;
	}
	if(length == 2)
	{
		strcpy(dest,"$0.");
		dest += 3;
	}
	strcpy(dest,"$");
	while(*src)
	{
		if(index++ % 4 == 0)
			if(re_symbol-- > 1)
				*dest++ = ',';
			else
				*dest++ = '.';
		else
			*dest++ = *src++;
	}
	*dest = '\0';
}




