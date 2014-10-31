
/*公约数*/
int gcd(int m, int n)
{
	int r;

	if(m <= 0 || n <= 0)
		return 0;
	if(m % n == 0)
		return n;
	if( (r = m % n) > 0)
		return gcd(n,r);
}