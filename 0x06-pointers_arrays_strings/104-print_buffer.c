#include "main.h"
#include <stdio.h>

/**
 * isPrintableASCII - determines if n is a printable ASCII char
 * @n: integer
 * Return: 1 if true, 0 if false
 */
int isPrintableASCII(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * printHexes - print hex values for string b in formatted form
 * @b: string to print
 * @start: starting position
 * @end: ending position
 */
void printHexes(char *b, int start, int end)
{
	int y = 0;

	while (y < 10)
	{
		if (y < end)
			printf("%02x", *(b + start + y));
		else
			printf("  ");
		if (y % 2)
			printf(" ");
		y++;
	}
}

/**
 * printASCII - print ascii values for string b,
 * formatted to replace nonprintable chars with '.'
 * @b: string to print
 * @start: starting position
 * @end: ending position
 */
void printASCII(char *b, int start, int end)
{
	int u, y = 0;

	while (y < end)
	{
		u = *(b + y + start);
		if (!isPrintableASCII(u))
			u = 46;
		printf("%c", u);
		y++;
	}
}

/**
 * print_buffer - prints a buffer
 * @b: string
 * @size: size of buffer
 */
void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printHexes(b, start, end);
			printASCII(b, start, end);
			printf("\n");
		}
	} else
		printf("\n");
}
