#include "main.h"

/**
 * print_last_digit - print the last digit
 * of numbers
 * @n: n is an integer
 * Return: integer
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
