#include "main.h"

/**
 * _strcpy - copy string 2 to string 1
 * @dest: string 1 that is string to be copied to
 * @src: string 2 or string to be copied
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';
	return (dest);
}
