#include <stdio.h>

/**
 * main - print the alphabets in lower case
 * Return: 0 if exited properly, non-zero if otherwise
 */

int main(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet<='z'; alphabet++)
	{
		putchar(alphabet);
		putchar("\n");
	}
	return(0);
}
