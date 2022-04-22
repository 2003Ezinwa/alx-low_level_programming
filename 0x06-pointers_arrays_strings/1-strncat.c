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
	int i, j;

	dest[j] = '\0';
	for (i = 0; i < n && *(src + i) != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i + 1] = '\0';
	return (dest);
}
