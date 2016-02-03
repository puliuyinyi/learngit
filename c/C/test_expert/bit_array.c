//#include <stdio.h>
//#define SIZE (8 * sizeof(unsigned int))
//
//void set_bit(char bit_array[], unsigned int bit_number);
//void clear_bit(char bit_array[], unsigned int bit_number);
//void assign_bit(char bit_array[], unsigned int bit_number, int value);
//int test_bit(char bit_array[], unsigned int bit_number);
//int main(void)
//{	
//	int i;
//	char bit[SIZE] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1};
//	for(i = 0;i < SIZE;i++){
//		printf("%d ",bit[i]);
//	}
//	printf("\n%d",test_bit(bit,7));
//	printf("\n");
//	return 0;
//}
//
//void set_bit(char bit_array[], unsigned int bit_number)
//{
//	unsigned int i;	/*控制循环次数，并辅助从低到高读取bit_number的每一位*/
//	unsigned int index;	/*字符数组下标索引*/
//	
//	for(i = 1,index = SIZE - 1;i != 0;i <<= 1,index--){
//		if(bit_number & i)
//			bit_array[index] = 1;
//	}
//}
//
//void clear_bit(char bit_array[], unsigned int bit_number)
//{
//	unsigned int i;	/*控制循环次数，并辅助从低到高读取bit_number的每一位*/
//	unsigned int index;	/*字符数组下标索引*/
//	
//	for(i = 1,index = SIZE - 1;i != 0;i <<= 1,index--){
//		if(bit_number & i)
//			bit_array[index] = 0;
//	}
//}
//
//void assign_bit(char bit_array[], unsigned int bit_number, int value)
//{
//	if(value)
//		set_bit(bit_array,bit_number);
//	else
//		clear_bit(bit_array,bit_number);
//}
//
//int test_bit(char bit_array[], unsigned int bit_number)
//{
//	unsigned int i;	/*控制循环次数，并辅助从低到高读取bit_number的每一位*/
//	unsigned int index;	/*字符数组下标索引*/
//	int flag = 1;
//
//	for(i = 1,index = SIZE - 1;i != 0;i <<= 1,index--){
//		if((bit_number & i) && !bit_array[index]){
//			flag = 0;
//			break;
//		}
//	}
//	
//	return flag;
//}