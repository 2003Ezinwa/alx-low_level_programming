#include "main.h"

/**
 * _strncpy - copies one string into another
 * @dest: string 1 to be copied into
 * @src: string 2 to be copied
 * @n: the number of letters to copy from string 2
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int destlen, i;

	destlen = 0;
	while (dest[destlen] != '\0')
	{
		destlen++;
	}
	for (i = 0; i < n && *(src + i) != '\0'; i++)
	{
		dest[destlen] = src[i];
		destlen++;
	}
	dest[destlen] = '\0';
	return (dest);
}
