#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: head node of the linked list
 *
 * Return: number of nodes in the linked list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *c = h;

	while (c != NULL)
	{
		if (c->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", c->len, c->str);

		count++;
		c = c->next;
	}

	return (count);
}
