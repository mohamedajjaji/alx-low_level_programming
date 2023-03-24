#include "main.h"

/**
 * print_number - function that prints an integer
 *
 * @n: input integer
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int nb = n;

	if (n < 0)
	{
		_putchar('-');
		nb = -nb;
	}
	if (nb / 10)
	{
		print_number(nb / 10);
	}
	_putchar(nb % 10 + '0');
}
