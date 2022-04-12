#include "main.h"

/**
 * print_alphabet - lowercase alpahbet with function
 * Return: 0 if successful
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
