#include "main.h"
#include <stdlib.h>

/**
 * create_array - create and array and
 * initialize it with char c
 * @size: size of array
 * @c: initializer
 * Return: array if successful
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int b;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		a = malloc(sizeof(char) * size);
		if (a == NULL)
		{
			return (NULL);
		}
		for (b = 0; b < size; b++)
		{
			a[b] = c;
		}
		return (a);
	}
}

