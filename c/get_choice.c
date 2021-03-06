/***************************************
FUNCTION: getlet
DESCRIPTION: select a character from a given string
INPUT: 
	string s: means you can select a character from this string 
OUTPUT:  
RETURN: 
	char c: what you have selected in given string
OTHER: 
***************************************/
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
