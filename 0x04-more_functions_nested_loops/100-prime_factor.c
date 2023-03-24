#include "main.h"

/**
 * main - Finds and prints the largest prime factor of the number 612852475143,
 *
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	long int factor = 2, largest_factor = 0, nb = 612852475143;

	while (nb != 1)
	{
		if (nb % factor == 0)
		{
			nb /= factor;
			largest_factor = factor;
		}
		else
		{
			factor++;
		}
	}

	printf("%ld\n", largest_factor);
	return (0);
}
