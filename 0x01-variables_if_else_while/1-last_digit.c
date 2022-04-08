#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - get the last digit of the variable
 * and check if it is greater than 5,
 * equal to 0, or less than 6 and not 0
 * Return: 0 if exited properly, non-zero if otherwise
 */

/* Return: 0 if exited properly, non-zero if otherwise */

int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	a = n%10;

	if (a > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, a);
	}
	else if (a == 0)
	{
		printf("Last digit of %d is %d and isb 0\n", n, a);
	}
	else if (a < 6 && a != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
	}
	
	return (0);
}
