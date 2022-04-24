#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: string 1 to be concatenated to
 * @src: string to to concatenate
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int destlen;
	int i;

	destlen = 0;
	while (dest[dest[len] != '\0')
	{
		destlen++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[destlen] = src[i];
		i++;
		destlen++;
	}
	dest[destlen] = '\0';
	return (dest);
}
