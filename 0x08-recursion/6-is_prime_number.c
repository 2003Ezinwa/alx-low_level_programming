#include "main.h"

int divisors(int n, int p);

/**
 * is_prime_number - check for prime number
 * @n: number to check (integer)
 * Return: 1 if prime number, otherwise 0
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (divisors(3, n));
	}
}

/**
 * divisors - checks for prime number
 * @n: number to check
 * @p: another parameter
 * Return: 0 or 1
 */

int divisors(int n, int p)
{
	if (p % n == 0)
	{
		return (0);
	}
	else if (p / 2 > n)
	{
		return (divisors(n + 2, p));
	}
	else
	{
		return (1);
	}
}
