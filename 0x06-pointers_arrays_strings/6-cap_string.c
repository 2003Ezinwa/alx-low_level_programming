#include "main.h"

/**
 * cap_string - capitalizes all words
 * in the string
 * @str: string
 * Return: str
 */

char *cap_string(char *str)
{
	int one, two;
	char g[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 10, 9};

	one = 0;
	while (str[one] != '\0')
	{
		if (one == 0 && str[one] >= 97 && str[one] <= 122)
		{
			str[one] = str[one] - 32;
		}
		two = 0;
		while (g[two] != '\0')
		{
			if (g[two] == str[one] && (str[one + 1] >= 97 && str[one + 1] <= 122))
			{
				str[one + 1] = str[one + 1] - 32;
			}
			two++;
		}
		one++;
	}
	return (str);
}
