#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 *
 * @s: pointer to a char
 *
 * Return: the converted integer, or 0 if no numbers were found
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int result = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign = -sign;
		}
		else if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
		}
		else if (result > 0)
		{
			break;
		}
		s++;
	}

	return (sign * result);
}
