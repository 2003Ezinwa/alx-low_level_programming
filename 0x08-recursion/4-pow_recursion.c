#include "main.h"

/**
 * _pow_recursion - raise first argumentb
 * to the power of the second argument
 * @x: first argument
 * @y: second argument
 * Return: final answer, -1 if y < 0, and 1 if y = 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return ((x) * _pow_recursion(x, y - 1));
	}
}
