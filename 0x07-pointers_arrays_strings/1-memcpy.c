#include "main.h"

/**
 * _memcpy - copies memory from one string to another
 * @dest: string to be copied to
 * @src: string to copy
 * @n: number of bytes to copr from src
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		dest[count] = src[ount];
		n--;
	}
	return (dest);
}
