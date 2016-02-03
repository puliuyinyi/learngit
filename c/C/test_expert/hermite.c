//#include <stdio.h>
//
//int hermite(int n, int x);
//int main(void)
//{
//	int n = 1,x = 1;
//	
//	while(!(n == 0 && x == 0)){
//		printf("Enter n and x(input n = 0 and x = 0 means end): ");
//		scanf("%d%d",&n,&x);
//		printf("hermite(%d,%d) = %d\n",n,x,hermite(n,x));
//	}
//	
//	return 0;
//}
//
//int hermite(int n, int x)
//{
//	if(n <= 0)
//		return 1;
//	if(n == 1)
//		return 2 * x;
//	
//	return 2 * x * hermite(n - 1,x) - 2 * (n - 1) * hermite(n - 2,x); 
//}