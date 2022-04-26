#include "main.h"

/**
 * _strpbrk - search a string for any of
 * a set of bytes
 * @s: string 1 to be searched
 * @accept: set of bytes to search for in string 1
 * Return: s if successful, NULL if otherwise
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b, count = 0;

	for (a = 0; *s != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (*s == accept[b])
			{
				count++;
				break;
			}

		}
		if (count)
		{
			return (s);
		}
		else
		{
			s++;
		}

	}
	return (NULL);
}
