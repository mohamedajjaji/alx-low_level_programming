#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except q and e,
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'q' && alpha != 'e')
		{
		putchar(alpha);
		}
	}
	putchar('\n');

	return (0);
}
