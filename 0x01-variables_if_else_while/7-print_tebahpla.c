#include <stdio.h>

/**
 * main - prints the reverse lowercase alphabet, followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
	putchar(alpha);
	}
	putchar('\n');

	return (0);
}
