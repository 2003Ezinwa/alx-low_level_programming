#include "main.h"

/**
 * print_line - print lineby length inputted
 * @n: n is an integer and the length
 * Return: 0 if successful
 */

void print_line(int n)
{
	int i;
	
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
	return (0);
}
