#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked
 * list and returns its data
 * @head: A pointer to a pointer to the head node of the list
 *
 * Return: The data of the head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int nb;

	if (*head == NULL)
		return (0);

	node = *head;
	*head = node->next;
	nb = node->n;
	free(node);

	return (nb);
}
