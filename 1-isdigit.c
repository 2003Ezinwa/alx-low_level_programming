#include "main.h"

/**
 * _isdigit - checks for a digi 0 through 9
 * @c: c is an integer
 * Return: 1 if digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c < 58))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
