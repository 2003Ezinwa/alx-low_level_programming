#include "main.h"

/**
 * print_diagonal - print diagonal
 * @n: n is an integer and height
 * Return: void
 */

void print_diagonal(int n)
{
	int j = 0, k;

	if (n > 0)
	{
		for (; j < n; j++)
		{
			for (k = 0; k < j; k++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
