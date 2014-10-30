#include <stdio.h>
#include <stdlib.h>
int rule1(int x,int y){return x - y;}//从小到大排
int rule2(int x,int y){return y - x;}//从大到小排

/* 指向函数的指针作为参数 */
void sort(int* arr,int size,int (*rule)(int,int)){
	int i,j;
	bool fage;
	for(i = 0; i < size-1; i++){
		fage = true;
		for(j = 0; j < size-i-1; j++){
			if(rule(arr[j],arr[j+1]) > 0){
				arr[j] = arr[j]^arr[j+1];
				arr[j+1] = arr[j]^arr[j+1];
				arr[j] = arr[j]^arr[j+1];
				fage = false;
			}
		}
		if(fage)break;
	}
}
void print(int* arr,int size){
	int i;
	for(i = 0; i < size; i++){
		printf(" %d ",arr[i]);
	}
	printf("\n");
}
int main(int argc, char* argv[])
{
	int a[] = {5,2,8,7,1,4,9,3,6,0};
	print(a,10);
	sort(a,10,rule1);
	print(a,10);
	sort(a,10,rule2);
	print(a,10);
	return 0;
}
