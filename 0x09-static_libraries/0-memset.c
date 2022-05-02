#include "main.h"

/**
 * _memset - sets memory
 * @s: string to be set
 * @b: character to set the string with
 * @n: number of bytes in the string to set
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
