#include "main.h"

/**
 * _strchr - return the first occurence
 * of a character in a string if it exists
 * else  return null
 * @s: string
 * @c: character
 * Return: s if equal to c and null if s != c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s);
		}
	}
	if (*(s + i) == c)
	{
		return (s);
	}
	else
	{
		return (0);
	}
}
