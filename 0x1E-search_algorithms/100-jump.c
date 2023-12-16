#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array
 *               of integers using the Jump search algorithm
 *
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for in the array
 *
 * Return: Index of the first occurrence of @value in @array,
 *         or -1 if @value is not present in the array
 */
int jump_search(int *array, size_t size, int value)
{
	int index, m, k, p;

	if (array == NULL || size == 0)
		return (-1);

	m = (int)sqrt((double)size);
	k = 0;
	p = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		k++;
		p = index;
		index = k * m;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", p, index);

	for (; p <= index && p < (int)size; p++)
	{
		printf("Value checked array[%d] = [%d]\n", p, array[p]);
		if (array[p] == value)
			return (p);
	}

	return (-1);
}
