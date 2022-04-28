#include "main.h"

int _strlen_recursion(char *s);
int p1(char *s, int l);

/**
 * is_palindrome - to check if it is an empty string
 * @s: pointer to string
 * Return: 0 if non-empty, 1 if empty
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	
	return (p1(s, len - 1));
}

/**
 * _strlen_recursion - length of string
 * @s: pointer to string
 * Return: length
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * p1 - palindrome
 * @s: pointer to string
 * @l: position
 * Return: boolean
 */

int p1(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}
	if (*s == *(s + l))
	{
		return (p1(s + 1, l - 2));
	}
	return (0);
}
