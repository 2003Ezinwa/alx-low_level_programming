#include "main.h"

int sqroot(int n, int i);

/**
 * _sqrt_recursion - find the natural
 * square root of a number
 * @n: the number (integer)
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	return (sqroot(n, 1));
}

/**
 * sqroot - square root recursion of a
 * number
 * @n: one parameter (integer)
 * @i: another parameter (integer)
 * Return: the square root (I guess)
 */

int sqroot(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	if ((i * i) > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (sqroot(n, i + 1));
}
