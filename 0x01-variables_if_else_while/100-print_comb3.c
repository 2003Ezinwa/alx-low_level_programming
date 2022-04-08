#include <stdio.h>

/**
 * main - print possible combinations
 * of two digit numbers without repeating
 * two single digits and having the same digits 
 * combined alternately
 * Return: 0 if successful
 */

int main(void)
{
	int i;
	int j;

	for(i = 48; i < 58; i++)
	{
		for(j = 48; j < 58; j++)
		{
			if (i != j && i < j)
			{
				putchar(i);
				putchar(j);
				if(j == 57 && i == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
