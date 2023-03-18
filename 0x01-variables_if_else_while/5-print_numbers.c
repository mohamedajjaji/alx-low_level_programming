#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nb = 0;

	do {
	printf("%d", nb);
	nb++;
	} while (nb < 10);

	printf("\n");

	return (0);
}
