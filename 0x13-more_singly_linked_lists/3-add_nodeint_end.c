#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: A pointer to a pointer to the head node of the list
 * @n: The integer value to be added to the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *node;

	new_node = malloc(sizeof(listint_t));
	node = *head;

	if (head == NULL || new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		while (node->next)
			node = node->next;
		node->next = new_node;
	}

	return (new_node);
}

