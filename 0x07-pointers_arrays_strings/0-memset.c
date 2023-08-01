#include "main.h"
/**
 * _memset - s function pointed to first area of n function
 * @s: input
 * @b: input
 * @n: input
 * Return: s 
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	
	for (i = 0; n > 0; i++)
	{	
		s[i] = b;
		n--;
	}
	return (s);	
}	
