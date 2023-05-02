#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a listint_t list
 * @head: A pointer to a pointer to the head node of the list
 * @index: The index of the node to delete, starting at 0
 *
 * Return: 1 if the node was deleted, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *prev_node;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	do {
		if (i == index)
		{
			prev_node->next = node->next;
			free(node);
			return (1);
		}
		i++;
		prev_node = node;
		node = node->next;
	} while (node != NULL);

	return (-1);
}
