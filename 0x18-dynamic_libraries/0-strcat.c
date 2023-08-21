#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *
 * @dest:char
 * @src:char
 *
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	char *d = dest;

	while (*d != '\0')
	{
		d++;
	}

	while (*src != '\0')
	{
		*d = *src;
		d++;
		src++;
	}
	*d = '\0';
	return (dest);
}
