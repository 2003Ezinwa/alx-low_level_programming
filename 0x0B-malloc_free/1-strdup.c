#include "main.h"
#include <stdlib.h>

/**
 * _strdup - create a new memory address
 * with a copy of the string
 * @str: the string
 * Return: the new str if successful
 */

char *_strdup(char *str)
{
	char *newstr;
	unsigned int a, b;

	if (str == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (*str != '\0')
	{
		a++;
	}
	newstr = malloc(sizeof(char) * (a + 1));
	if (newstr == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < a; b++)
	{
		newstr[b] = str[b];
	}
	newstr[b] = '\0';
	return (newstr);
}
