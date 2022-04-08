#include <stdio.h>

/**
 * main - print the alphabets in lower case
 * Return: 0 if exited properly, non-zero if otherwise
 */

int main(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		putchar("%c\n", alphabet)
		alphabet++
	}
	return(0);
}
