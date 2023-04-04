#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: The string to check
 * @accept: The characters to match
 *
 * Return: The number of bytes in the initial segment of s which consist only
 *         of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int length = 0;

	while (*(s + i))
	{
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
			{
				length++;
				j = 0;
				i++;
			}
			else
			{
				j++;
			}
		}
		break;
	}
	return (length);
}
