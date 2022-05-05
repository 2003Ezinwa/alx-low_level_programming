#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * in a new memory address
 * @s1: string 1
 * @s2: string 2
 * Return: new string if successful
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr, *newmem;
	unsigned int sizeof1 = 0, sizeof2 = 0;

	ptr = s1;
	if (s1)
		while (*ptr++)
			sizeof1++;
	else
		s1 = "";
	ptr = s2;
	if (s2)
		while (*ptr++)
			sizeof2++;
	else
		s2 = "";
	newmem = malloc(sizeof1 + sizeof2 + 1);
	if (newmem == NULL)
		return (NULL);
	ptr = newmem;
	while (*s1)
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;
	*ptr = 0;
	return (newmem);
}
