#include "main.h"

/**
 * swap_int - swap the integers
 * @a: integer 1
 * @b: integer 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
