#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers
 * from n to 98
 * @n: starting integer
 * Return: void
 */

void print_to_98(void)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		else if (n > 98)
		{
			while (n > 98)
			{
				printf("%d, ", n);
				n--;
			}
		}
	}
	prinf("98\n");
}
