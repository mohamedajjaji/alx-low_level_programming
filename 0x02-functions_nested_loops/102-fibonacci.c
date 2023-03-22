#include <stdio.h>

/**
  * main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
  *
  * followed by a new line
  *
  * Return: always 0
  */

int main(void)
{
	long int first = 1, second = 2, next;
	int i = 2, n = 50;

	printf("%ld, %ld", first, second);
	do {
		next = first + second;
		printf(", %ld", next);
		first = second;
		second = next;

		i++;

	} while (i < n);

	printf("\n");
	return (0);
}
