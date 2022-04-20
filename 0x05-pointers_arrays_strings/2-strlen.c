#include "main.h"

/**
 * _strlen -length of string
 * @s: string to be counted
 * Return: count
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
