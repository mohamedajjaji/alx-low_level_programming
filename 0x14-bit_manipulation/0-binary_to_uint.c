#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is one or more chars
 * in the string b that is not 0 or 1 or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int nb = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	do {
		if (b[i] == '0')
			nb = nb << 1;
		else if (b[i] == '1')
			nb = (nb << 1) | 1;
		else
			return (0);
		i++;
	} while (b[i] != '\0');

	return (nb);
}
