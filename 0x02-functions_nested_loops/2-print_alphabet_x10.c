#include <stdio.h>

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 *
 * followed by a new line
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			putchar(j);
		}

		putchar('\n');
	}
}
