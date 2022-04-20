#include <stdio.h>
#include "main.h"

/**
 * print_array - print the value or element
 * of the concerned place
 * @a: array
 * @n: place or point to end printing
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
