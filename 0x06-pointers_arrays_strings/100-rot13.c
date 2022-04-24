#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string
 * Return: pointer to dest
 */

char *rot13(char *s)
{
	int counter = 0, b;

	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[counter] != '\0')
	{
		for (b = 0; b < 52; b++)
		{
			if (s[counter] == alpha[b])
			{
				s[counter] = rot13[b];
				break;
			}
		}
		counter++;
	}
	return (s);
}
