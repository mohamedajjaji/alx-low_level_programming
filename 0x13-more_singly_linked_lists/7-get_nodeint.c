#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: A pointer to the head node of the list
 * @index: The index of the node
 *
 * Return: A pointer to the nth node, or NULL if the node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nb = 0;

	while (head != NULL && nb < index)
	{
		head = head->next;
		nb++;
	}

	if (head == NULL || nb < index)
		return (NULL);

	return (head);
}
