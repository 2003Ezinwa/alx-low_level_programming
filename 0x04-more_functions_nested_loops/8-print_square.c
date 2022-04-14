#include "main.h"

/**
 * print_square - print a square according
 * to the inputted size
 * @size: size is an integer and the size
 * of the square
 * Return: 0 if successful
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i <= size; i++)
		{
			for (j = 0; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
	return (0);
}
