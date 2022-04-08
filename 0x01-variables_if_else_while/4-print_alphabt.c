#include <stdio.h>

/**
 * main - print the alphabets in lower case
 * except q and e
 * Return: 0 if exited properly, non-zero if otherwise
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'q' && alphabet != 'e')
		{
			putchar(alphabet);
		}
	}
	putchar('\n');
	return (0);
}
