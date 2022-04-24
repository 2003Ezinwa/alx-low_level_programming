#include "main.h"

/**
 * leet - encodes a string
 * @str: string
 * Return: str
 */

char *leet(char *str)
{
	int firstvar, secvar;
	char b[] = "aAeEoOtTlL";
	char e[] = "4433007711";

	firstvar = 0;
	while (str[firstvar] != '\0')
	{
		secvar = 0;
		while (b[secvar] != '\0')
		{
			if (str[firstvar] == b[secvar])
			{
				str[firstvar] = e[secvar];
			}
			secvar++;
		}
		firstvar++;
	}
	return (str);
}
