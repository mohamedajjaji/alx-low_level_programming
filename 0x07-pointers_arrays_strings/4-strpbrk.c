#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: Pointer to the string to search.
 * @accept: Pointer to the set of bytes to match.
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	while (*(s + i))
	{
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
			j++;
		}
		i++;
		j = 0;
	}

	return (0);
}
