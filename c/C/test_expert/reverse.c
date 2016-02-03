//#include <stdio.h>
//
//unsigned int reverse_bits(unsigned int value)
//{
//	unsigned int answer = 0;
//	unsigned int i;
//	
//	for(i = 1;i != 0;i <<= 1){
//		answer <<= 1;
//		if(value & 1){
//			answer |= 1;
//			printf("answer in if: %d",answer);
//		}
//		value >>= 1;
//	}
//	return answer;
//}
//
//int main(void)
//{
//	unsigned int n = 3;
//	printf("%u\t%d",reverse_bits(n),reverse_bits(n));
//	return 0;
//}