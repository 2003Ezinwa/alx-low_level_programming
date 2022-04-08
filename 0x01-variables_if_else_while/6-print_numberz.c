#include <stdio.h>

/**
 * main - print single digit number
 * without the use of any variable of
 * type char
 * Return: 0 if properly exited
 */

int main(void)
{
	int numberz;

	for (numberz = 0; numberz < 10; numberz++)
	{
		putchar(numberz);
	}
	putchar('\n');
	return (0);
}
