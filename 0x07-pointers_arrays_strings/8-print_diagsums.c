#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of the elements
 * of each diagonal
 * @a: array
 * @size: size of the array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int k, asum = 0, bsum = 0;

	for (k = 0; k < size; k++)
	{
		asum += *(a + (size * k + k));
		bsum += *(a + (size * k + size - 1 - k));
	}
	printf("%d, ", asum);
	printf("%d\n", bsum);
}
