#include "main.h"

/**
* print_most_numbers - function that prints the numbers,
*
* from 0 to 9, Do not print 2 and 4
*
* followed by a new line
*
* Return: void
*/

void print_most_numbers(void)
{
	char c = '0';

	do {
		if (!(c == '2' || c == '4'))
		{
			putchar(c);
		}
		c++;
	} while (c <= '9');

	putchar('\n');
}
