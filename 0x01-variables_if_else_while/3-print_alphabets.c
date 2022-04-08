#include <stdio.h>

/**
 * main - print the alphabets in upper and lower case
 * Return: 0 if exited properly, non-zero if otherwise
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
