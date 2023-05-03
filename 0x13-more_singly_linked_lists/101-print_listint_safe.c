#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely
 * @head: A pointer to the head node of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node = NULL, *l_node = NULL;
	size_t i = 0, new_node;

	node = head;
	while (node)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		i++;
		node = node->next;
		l_node = head;
		new_node = 0;
		while (new_node < i)
		{
			if (node == l_node)
			{
				printf("-> [%p] %d\n", (void *)node, node->n);
				return (i);
			}
			l_node = l_node->next;
			new_node++;
		}
		if (!head)
			exit(98);
	}
	return (i);
}
