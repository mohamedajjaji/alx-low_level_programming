#include "main.h"

/**
 * array_range - creates an array of integers
 *
 * @min: the minimum value of the array
 * @max: the maximum value of the array
 *
 * Return: a pointer to the newly created array
 *          or NULL if the function fails
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc((max - min + 1) * sizeof(int));

	if (!ptr)
	{
		return (NULL);
	}
	while (min <= max)
	{
		ptr[i] = min;
		min++;
		i++;
	}

	return (ptr);
}
