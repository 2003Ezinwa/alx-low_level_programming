#include "main.h"

/**
 * _strspn - length of prefixed substring
 * in string 1
 * @s: string 1 which has the substring
 * @accept: string 2 which is the prefixed substring
 * Return: len
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int a, b, c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				len++;
				c++;
			}
		}
		if (c == 0)
		{
break:
		}
		c = 0;
	}
	return (len);
}

