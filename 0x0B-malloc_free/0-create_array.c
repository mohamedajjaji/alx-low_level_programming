#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it
 * with a specific char.
 *
 * @size: the size of the array to be created.
 * @c: the character with which each element of the array will be initialized.
 *
 * Return: pointer to the created array or NULL if fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
