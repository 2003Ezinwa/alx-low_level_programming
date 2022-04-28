#include "main.h"

/**
 * _strlen_recursion - return the length
 * of a string
 * @s: the string
 * Return: length
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s == '\0')
	{
		return (n);
	}
	else
	{
		n++;
		return (n + _strlen_recursion(s + 1));
	}
}

