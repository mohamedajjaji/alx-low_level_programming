#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to convert and print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = 1;
	int bit = sizeof(n) * 8;

	do {
		bit--;
	} while ((n >> bit) == 0 && bit > 0);

	while (bit >= 0)
	{
		_putchar((n & (i << bit)) ? '1' : '0');
		bit--;
	}
}
