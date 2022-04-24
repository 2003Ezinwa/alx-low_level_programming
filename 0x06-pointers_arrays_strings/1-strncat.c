#include "main.h"

/**
 * _strncat - concatenates two strings using
 * at most n bytes from src
 * @dest: string 1
 * @src: string 2
 * @n: number of placeholders of src to
 * concatenate
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen, i;

	destlen = 0;
	while (dest[destlen] != '\0')
	{
		destlen++;
	}
	for (i = 0; i < n; i++)
	{
		dest[destlen] = src[i];
	}
	dest[destlen] = '\0';
	return (dest);
}
