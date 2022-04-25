#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: number 1
 * @n2: number 2
 * @r: buffer for storing
 * @size_r: buffer size
 * Return: pointer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a1 = 0, a2 = 0, bd, xo, get1, get2, sum = 0;

	while (*(n1 + a1) != '\0')
		a1++;
	while (*(n2 + a2) != '\0')
		a2++;
	if (a1 >= a2)
		xo = a1;
	else
		xo = a2;
	if (size_r <= xo + 1)
		return (0);
	r[xo + 1] = '\0';
	a1--, a2--, size_r--;
	get1 = *(n1 + a1) - 48, get2 = *(n2 + a2) - 48;
	while (xo >= 0)
		bd = get1 + get2 + sum;
		if (bd >= 10)
			sum = bd / 10;
		else
			sum = 0;
		if (bd > 0)
			*(r + xo) = (bd % 10) + 48;
		else
			*(r + xo) = '0';
		if (a1 > 0)
			a1--, get1 = *(n1 + a1) - 48;
		else
			get1 = 0;
		if (a2 > 0)
			a2--, get2 = *(n2 + a2) - 48;
		else
			get2 = 0;
		xo--, size_r--;
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
