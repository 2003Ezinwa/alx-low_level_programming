#include "main.h"

/**
 * print_numbers - print from 0 to 9
 * followed by new line
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
