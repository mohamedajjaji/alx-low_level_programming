#include "main.h"

/**
 * _realloc - reallocates a memory block
 *
 * @ptr: pointer to the old memory
 * @old_size: old memory size
 * @new_size: new memory size
 *
 * Return: a pointer to the newly allocated memory block
 *          or NULL if the function fails
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (!ptr)
	{
		p = malloc(new_size);
		if (!p)
		{
			return (NULL);
		}
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);

	if (!p)
	{
		return (NULL);
	}

	if (new_size < old_size)
	{
		memcpy(p, ptr, new_size);
	}
	else
	{
		memcpy(p, ptr, old_size);
	}
	free(ptr);
	return (p);
}
