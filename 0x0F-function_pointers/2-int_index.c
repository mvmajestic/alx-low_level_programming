#include "function_pointers.h"
/**
 * int_index - will return index place if comparison is true, else -1
 * @array: an array
 * @size: the size of elements in an array
 * @cmp: the pointer to function used to compare values
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))

{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
