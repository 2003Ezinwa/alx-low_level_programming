#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Check n to see if positive, zero
 * or negative
 * Return: 0 if exited properly, non-zero if otherwise
 */

/* Return: 0 if exited properly, non-zero if otherwise */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}

	return (0);

}
