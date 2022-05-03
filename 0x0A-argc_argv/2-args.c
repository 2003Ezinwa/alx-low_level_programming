#include <stdio.h>

/**
 * main - main function
 * @argc: param counter
 * @argv: param pointer
 * Return: 0 if sucessful
 */

int main(int argc, char *argv[])
{
	int e;

	for (e = 0; e < argc; e++)
	{
		printf("%s\n", argv[e]);
	}
	return (0);
}
