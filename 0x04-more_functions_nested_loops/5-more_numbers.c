#include "main.h"

/**
 * more_numbers - print 0 to 14 10 times
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 63; j++)
		{
			if (i >= 58)
			{
				_putchar((j / 10) + 48);
			}
			_putchar((j % 10) + 48);
		}
		_putchar('\n');
	}
}
