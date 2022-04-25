#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer for storing.
 * @size_r: buffer size:
 * Return: pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int e1 = 0, e2 = 0, df, wu, sx1, sx2, add = 0;

	while (*(n1 + e1) != '\0')
		e1++;
	while (*(n2 + e2) != '\0')
		e2++;
	if (e1 >= e2)
		wu = e1;
	else
		wu = e2;
	if (size_r <= wu + 1)
		return (0);
	r[wu + 1] = '\0';
	e1--, e2--, size_r--;
	sx1 = *(n1 + e1) - 48, sx2 = *(n2 + e2) - 48;
	while (wu >= 0)
	{
		df = sx1 + sx2 + add;
		if (df >= 10)
			add = df / 10;
		else
			add = 0;
		if (df > 0)
		*(r + wu) = (df % 10) + 48;
		else
			*(r + wu) = '0';
		if (e1 > 0)
			e1--, sx1 = *(n1 + e1) - 48;
		else
			sx1 = 0;
		if (e2 > 0)
			e2--, sx2 = *(n2 + e2) - 48;
		else
			sx2 = 0;
		wu--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
