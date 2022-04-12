#include "main.h"

/**
 * print_alphabet_x10 - print the alphabets 10 times
 * Return: 0 if successful
 */

void print_alphabet_x10(void)
{
	char letter = 'a';
	int i = 0;

	while (i < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		i++;
	}
	_putchar('\n');
}
