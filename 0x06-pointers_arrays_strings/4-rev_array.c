#include "main.h"

/**
 * reverse_array - reverses the elemets of an array
 * @a: array
 * @n: number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int *beg, *end, count, i;

	beg = a;
	end = a;
	for (i = 0; i < n - 1; i++)
	{
		end++;
	}
	for (i = 0; i < n / 2; i++)
	{
		count = *end;
		*end = *beg;
		*beg = count;
		beg++;
		end--;
	}
}
