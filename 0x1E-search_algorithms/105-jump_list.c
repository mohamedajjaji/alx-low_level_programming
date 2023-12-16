#include "search_algos.h"

/**
 * jump_list - Searches for a value in a singly linked list
 *              using the Jump search algorithm
 *
 * @list: Pointer to the head of the linked list
 * @size: Number of nodes in the linked list
 * @value: Value to search for in the linked list
 *
 * Return: Pointer to the node containing the @value,
 *         or NULL if @value is not present in the list
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t index, k, m;
	listint_t *p;

	if (list == NULL || size == 0)
		return (NULL);

	m = (size_t)sqrt((double)size);
	index = 0;
	k = 0;

	do {
		p = list;
		k++;
		index = k * m;

		while (list->next && list->index < index)
			list = list->next;

		if (list->next == NULL && index != list->index)
			index = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);

	} while (index < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)p->index, (int)list->index);

	for (; p && p->index <= list->index; p = p->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)p->index, p->n);
		if (p->n == value)
			return (p);
	}

	return (NULL);
}
