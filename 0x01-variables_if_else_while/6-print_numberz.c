#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line
 * only the putchar function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nb = 0;

	do {
	/* 48 is the ASCII code for the character '0' */
	putchar(nb + 48);
	nb++;
	} while (nb < 10);

	putchar('\n');

	return (0);
}
