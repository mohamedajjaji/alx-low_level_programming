#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: number of arguments passed to program
 * @argv: array of strings containing arguments
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	while (argv[argc])
	{
		argc++;
	}

	printf("%d\n", argc - 1);

	return (0);
}
