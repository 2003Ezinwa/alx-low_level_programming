#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random passwords for
 * the program 101-crackme
 * Return: 0 if successful
 */

int main(void)
{
	int i = 0, j = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (j < 2772)
	{
		i = rand() % 128;
		if ((j + i) > 2772)
		{
			break;
		}
		j += i;
		printf("%c", i);
	}
	printf("%c\n", (2772 - j));
	return (0);
}
