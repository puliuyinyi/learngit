int test_compare(unsigned char * p, unsigned char * p2)
{
	unsigned int v1 = 0;
	unsigned int v2 = 0;
	
	/*p指针所‘假指’的int值*/
	v1 |= *p;
	v1 |= (*(p + 1))<<8;
	v1 |= (*(p + 2))<<16;
	v1 |= (*(p + 3))<<24;
	
	/*p2指针所‘假指’的int值*/
	v2 |= *p2;
	v2 |= (*(p2 + 1))<<8;
	v2 |= (*(p2 + 2))<<16;
	v2 |= (*(p2 + 3))<<24;

	printf("v1 == %d\n",v1);
	printf("v2 == %d\n",v2);
	
	/*比较v1和v2的值*/
	if((int)v1 > (int)v2)
		return 1;
	if((int)v1 == (int)v2)
		return 0;
	return -1;

}
int main(void)
{
	int a[] = {-4,1,2,3};
	char * cp = (char *)a;

	int res = test_compare((unsigned char *)cp + 4,(unsigned char *)cp + 8); // +4代表a[1]，+8代表a[2]
	printf("%d",res);
}