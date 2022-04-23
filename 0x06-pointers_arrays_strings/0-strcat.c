#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: string 1 to be concatenated to
 * @src: string to to concatenate
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int i;

	while (dest[dest[len])
	{
		destlen++;
	}
	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[destlen] = *(src + i);
		destlen++;
	}
	dest[destlen] = '\0';
	return (dest);


