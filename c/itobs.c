/*interget to binary string*/
char * itobs(int n,char *ps)
{
	int i;
	static int size = 8 * sizeof(int);
	for(i = size - 1;i >= 0;i--)
	{
		ps[i] = (01 & n) +'0';
		n >>= 1;
	}
	ps[size] = '\0';
	return ps;
}
