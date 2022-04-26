#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: 2D array
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int first, second;

	for (first = 0; first < 8; first++)
	{
		for (second = 0; second < 8; second++)
		{
			_putchar(*(*(first + a) + second));
		}
	_putchar('\n');
	}
}
