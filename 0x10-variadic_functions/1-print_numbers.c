#include "variadic_functions.h"

/**
 * print_numbers - print all numbersint the args
 * @separator: separator
 * @n: number of arguments
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int a;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(valist);
}
