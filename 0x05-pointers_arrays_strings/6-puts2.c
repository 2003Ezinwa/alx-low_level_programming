#include "main.h"

/**
 * puts2 - prints every other element
 * Thats what they said, but acordinng
 * to the code I copied (Yes I copied)
 * its abou printing elements of even places
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
