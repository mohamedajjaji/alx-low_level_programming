#include "search_algos.h"

/**
 * rec_search - Searches for a value in an array of
 * integers using the Binary search algorithm recursively
 *
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for in the array
 *
 * Return: Index of the first occurrence of @value in @array,
 *         or -1 if @value is not present in the array
 */
int rec_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
	{
		if (half > 0)
			return (rec_search(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (rec_search(array, half + 1, value));

	half++;
	return (rec_search(array + half, size - half, value) + half);
}

/**
 * advanced_binary - Calls the rec_search function to return
 * the index of the number in a sorted array using binary search
 *
 * @array: Input array
 * @size: Size of the array
 * @value: Value to search for
 *
 * Return: Index of the first occurrence of @value in @array,
 *         or -1 if @value is not present in the array
 */
int advanced_binary(int *array, size_t size, int value)
{
	int i;

	i = rec_search(array, size, value);

	if (i >= 0 && array[i] != value)
		return (-1);

	return (i);
}
