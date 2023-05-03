#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: A pointer to a pointer to the head node of the list
 *
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL, *next = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	node = *head;
	*head = NULL;
	do {
		next = node->next;
		node->next = *head;
		*head = node;
		node = next;
	} while (node != NULL);

	return (*head);
}
