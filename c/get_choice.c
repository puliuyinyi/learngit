/*select a character from a string*/
char getlet(const char * s)
{
	char c;
	c = getchar();
	while (strchr(s, c) == NULL)
	{
		printf ("Enter a character in the list %s\n", s);
		while( getchar() != '\n')
			continue;
		c = getchar();
	}
	while (getchar() != '\n')
		continue;
	return c;
}