#include "main.h"

/**
 * main - lowercase alpahbet with function
 * function - prints alphabets
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
