#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: head node of the linked list
 *
 * Return: number of nodes in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *c = h;

	while (c != NULL)
	{
		count++;
		c = c->next;
	}

	return (count);
}
