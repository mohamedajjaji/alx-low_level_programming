#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters
 *
 * of a string to uppercase
 *
 * @s: char
 *
 * Return: char
 */

char *string_toupper(char *s)
{
	char *ptr = s;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 32;
		}
		ptr++;
	}

	return (s);
}
