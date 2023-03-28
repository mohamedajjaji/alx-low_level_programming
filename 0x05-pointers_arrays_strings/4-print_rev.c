#include "main.h"

/**
 * print_rev - function that prints a string, in reverse,
 *
 * followed by a new line
 *
 * @s: pointer to a char
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
