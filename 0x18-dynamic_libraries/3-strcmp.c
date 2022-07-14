#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if equal, 1 if s1 > s2
 * and -1 if s1 < s2
 */

int _strcmp(char *s1, char *s2)
{
	char *str1one = s1;
	char *str2two = s2;

	while (*str1one != '\0' && *str2two != '\0' && *str1one == *str2two)
	{
		str1one++;
		str2two++;
	}
	return (*str1one - *str2two);
}
