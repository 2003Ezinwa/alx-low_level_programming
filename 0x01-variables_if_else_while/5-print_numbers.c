#include <stdio.h>

/**
 * main - print all single digit numbers
 * Return: 0 if exited properly, non-zero if otherwise
 */

int main(void)
{
	int a;

	for (a = 0; a < 9; a++)
	{
		printf("%d", a);
	}
	printf("\n");
	return (0);
}
