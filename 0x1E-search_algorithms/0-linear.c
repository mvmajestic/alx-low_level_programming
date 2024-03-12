#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers.
 * @array: A pointer to the first element of the array to search.
 * @size: number of elements in the array.
 * @value: value to search for.
 * Return: index of the value or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
