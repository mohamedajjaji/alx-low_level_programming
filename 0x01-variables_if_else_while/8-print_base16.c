#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * only the putchar function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nb = 0;

	do {
	putchar(nb + '0');
	nb++;
	} while (nb < 10);

	nb = 0;
	do {
	putchar(nb + 'a');
	nb++;
	} while (nb < 6);

	putchar('\n');

	return (0);
}
