#include "main.h"

/**
 * _strncat - function that concatenates two strings
 *
 * @dest: char
 * @src: char
 * @n: int
 *
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	char *d = dest;
	int i = 0;

	while (*d != '\0')
	{
		d++;
	}

	while (*src != '\0' && i < n)
	{
		*d = *src;
		d++;
		src++;
		i++;
	}

	*d = '\0';
	return (dest);
}
