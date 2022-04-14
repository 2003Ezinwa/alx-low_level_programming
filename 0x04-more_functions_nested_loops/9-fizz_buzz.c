#include <stddio.h>

/**
 * main - print numbers from 1 to 100
 * replacing multiples of 3 with Fizz,
 * multiples of 5 with Buzz, and multiples
 * of both 3 and 5 with FizzBuzz
 * Return: 0 if successful
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		printf("%d ", i);
	}
	printf("\n");
	return (0);
}
