#include <stdio.h>

/**
  * main - prints the sum of the even-valued terms,
  *
  * followed by a new line
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int first = 1, second = 2, next = 0;
	long int sum = 2;

	do {
		next = first + second;
		first = second;
		second = next;

		if (next % 2 == 0)
		{
			sum += next;
		}

	} while (next <= 4000000);

	printf("%ld\n", sum);
	return (0);
}
