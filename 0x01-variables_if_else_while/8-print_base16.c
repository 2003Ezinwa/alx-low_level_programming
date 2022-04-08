#include <stdio.h>

/** 
 * main - base 16
 * Return: 0 if successful
 */

int main(void)
{
	int n;
	char b;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (b = 'a'; b <= 'f'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
