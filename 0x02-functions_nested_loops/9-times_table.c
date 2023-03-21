#include "main.h"

/**
 * times_table - function that prints the 9 times table,
 *
 * starting with 0
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, num;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		_putchar(44);
		_putchar(' ');
		for (j = 1; j <= 9; j++)
		{
			num = i * j;
			if ((num / 10) > 0)
			{
				_putchar((num / 10) + 48);
			}
			else
			{
				_putchar(' ');
			}

			_putchar((num % 10) + 48);
			if (j != 9)
			{
				_putchar(44);
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
