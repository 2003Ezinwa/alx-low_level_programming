#include <stdio.h>
#include <unistd.h>

/**
 * main - print exactly a quote without 
 * using print or puts
 * followed by a newline to the standard error
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
	return (1);
}
