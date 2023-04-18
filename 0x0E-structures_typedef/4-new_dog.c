#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog_t.
 *
 * @name: A pointer to the name of the dog.
 * @age: The age of the dog.
 * @owner: A pointer to the name of the dog's owner.
 *
 * Return: If successful, a pointer to the new dog_t.
 *         Otherwise, NULL.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_name = malloc(sizeof(char) * (strlen(name) + 1));
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (new_owner == NULL)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}

	strcpy(new_name, name);
	strcpy(new_owner, owner);

	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;

	return (new_dog);
}
