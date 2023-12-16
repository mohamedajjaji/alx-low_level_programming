#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a skip list
 *
 * @list: Pointer to the head of the skip list
 * @value: Value to search for in the skip list
 *
 * Return: Pointer to the node containing the @value,
 *         or NULL if @value is not present in the list
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *n;

	if (list == NULL)
		return (NULL);

	n = list;

	do {
		list = n;
		n = n->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)n->index, n->n);
	} while (n->express && n->n < value);

	if (n->express == NULL)
	{
		list = n;
		while (n->next)
			n = n->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)n->index);

	while (list != n->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
