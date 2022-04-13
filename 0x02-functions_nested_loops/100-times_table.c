#include "main.h"
/**
 * print_times_table - prints time table
 * @n: integer for which the time table
 * will be printed
 * Return: void
 */
void print_times_table(int n)
{
	int row, column, product;

	if (n >= 0 && n < 15)
	{
		for (column = 0; column <= n; column++)
		{
			for (row = 0; row <= n; row++)
			{
				product = column * row;
				if (row == 0)
				{
					_putchar('0');
				}
				else if (product < 10)
				{
					_putchar(',', ' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(product % 10 + '0');
				}
				else if (product >= 10 && product < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((product / 10) % 10 + '0');
					_putchar(product % 10 + '0');
				}
				else if (product > 99 && product < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(product / 100 + '0');
					_putchar((product / 10) % 10 + '0');
					_putchar(product % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
i}
