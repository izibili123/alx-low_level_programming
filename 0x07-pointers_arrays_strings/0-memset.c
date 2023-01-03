#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: source string
 * @n: length of buffer
 * @b: the constant byte for filling
 * Return: new string.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
        	*(s+i) = b;
		i++;
	}
	return (s);
}
