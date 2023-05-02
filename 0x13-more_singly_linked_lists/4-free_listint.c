#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 * @head: A pointer to the head node of the list
 *
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
