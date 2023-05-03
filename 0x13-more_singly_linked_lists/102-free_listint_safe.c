#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to a pointer to the first node in the list
 *
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	int nb;
	listint_t *node;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h)
	{
		nb = *h - (*h)->next;
		if (nb > 0)
		{
			node = (*h)->next;
			free(*h);
			*h = node;
			i++;
		}
		else
		{
			free(*h);
			*h = NULL;
			i++;
			break;
		}
	}

	*h = NULL;
	return (i);
}
