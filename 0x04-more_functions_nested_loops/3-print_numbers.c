#include "main.h"

/**
* print_numbers - function that prints the numbers, from 0 to 9,
*
* followed by a new line
*
* Return: void
*/

void print_numbers(void)
{
	char c = '0';

	do {
		putchar(c);
		c++;
	} while (c <= '9');

	putchar('\n');
}
