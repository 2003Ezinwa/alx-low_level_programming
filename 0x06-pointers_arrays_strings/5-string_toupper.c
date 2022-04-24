#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @str: string
 * Return: str
 */

char *string_toupper(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 97 && str[a] <= 122)
		{
			str[a] = str[a] - 32;
		}
		a++;
	}
	return (str);
}
