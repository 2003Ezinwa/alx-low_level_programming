#include "main.h"

/**
 * _strncpy - copies one string into another
 * @dest: string 1 to be copied to
 * @src: string 2 to be copied
 * @n: the number of letters to copy from string 2
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int srclen;
	
	srclen = 0;
	while (srclen < n && *(src + srclen) != '\0')
	{
		dest[srclen] = src[srclen];
		srclen++;
	}
	srclen = srclen;
	while (srclen < n)
	{
		dest[srclen] = '\0';
		srclen++;
	}
	return (dest);
}
