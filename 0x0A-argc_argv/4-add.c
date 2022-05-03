#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - main function
 * @argc: param counter
 * @argv: param poiter
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int e, f, sum = 0;

	for (e = 1; e < argc; e++)
	{
		for (f = 0; argv[e][f] != '\0'; f++)
		{
			if (!isdigit(argv[e][f]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[e]);
	}
	printf("%d\n", sum);
	return (0);
}
