#include <stdio.h>

/**
 * main - print single digit number
 * without the use of any variable of
 * type char
 * Return: 0 if properly exited, non-zero if otherwise
 */

int main(void)
{
	int numberz;

	for (numberz = 48; numberz < 58; numberz++)
	{
		putchar(numberz);
	}
	putchar('\n');
	return (0);
}
