#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the memory allocated to a dog struct
 *
 * @d: pointer to the dog struct
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
