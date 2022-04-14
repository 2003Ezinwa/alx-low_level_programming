#include "main.h"

/**
 * print_square - print a square according
 * to the inputted size
 * @size: size is an integer and the size
 * of the square
 * Return: void
 */

void print_square(int size)
{
	int i = 0, j;

	if (size > 0)
	{
		for (; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
