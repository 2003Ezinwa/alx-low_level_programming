#include "main.h"

/**
 * print_diagonal - print diagonal
 * @n: n is an integer and height
 * Return: void
 */

void print_diagonal(int n)
{
	int j, k;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (k = 0; k < j; k++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else if ( n <= 0)
	{
		_putchar('\n');
	}
}
