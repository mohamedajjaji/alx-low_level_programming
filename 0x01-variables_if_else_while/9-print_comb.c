#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nb;

	for (nb = 0; nb < 10; nb++)
	{
	putchar(nb + '0');
		if (nb == 9)
		{
			break;
		}
	putchar(',');
	putchar(' ');
	}

	putchar('\n');

	return (0);
}
