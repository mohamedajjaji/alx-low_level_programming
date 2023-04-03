#include "main.h"

/**
 * _memcpy - function that copies memory area
 *
 * @dest: pointer to the memory area to copy to
 * @src: pointer to the memory area to copy from
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
