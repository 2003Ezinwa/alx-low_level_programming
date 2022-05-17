#include "variadic_functions.h"

/**
 * sum_them_all - summ all the arguments
 * @n: argument 1
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int a;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(valist, n);
	for (a = 0; a < n; a++)
	{
		sum += va_arg(valist, int);
	}
	va_end(valist);
	return (sum);
}
