#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: string 1 to be concatenated to
 * @src: string to to concatenate
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	dest[j] = '\0';
	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i + 1] = '\0';
	return (dest);


