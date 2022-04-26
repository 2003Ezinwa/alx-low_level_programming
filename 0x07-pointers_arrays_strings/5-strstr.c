#include "main.h"

/**
 * _strstr - check for a string in a string
 * @haystack: string to look into
 * @needle: string to look for
 * Return: pointer to beginning of located substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *a = haystack, *b = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack != *needle)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (a);
		}
		needle = b;
		a++;
		haystack = a;
	}
	return (0);
}
