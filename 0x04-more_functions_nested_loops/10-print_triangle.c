#include "main.h"

/**
 * print_triangle - print triangle accoring to
 * inputted size
 * @size: size is an integer and the size
 * of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i = 0, j, space = size - 1;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < space)
				{
					putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			space--;
			_putchar('\n');
		}
	}
}
