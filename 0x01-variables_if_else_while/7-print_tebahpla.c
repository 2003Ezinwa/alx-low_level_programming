#include <stdio.h>

/**
 * main - print the alphabets
 * in lowercase in reverse
 * Return: 0 if successful
 */

int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
	{
		putchar(alp);
	}
	putchar("\n");
	return (0);
}
