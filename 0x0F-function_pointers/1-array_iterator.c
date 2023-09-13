#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - will print each array element on new line
 * @array: an array
 * @size: how many elements to print
 * @action: the pointer to print regular or hex
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
