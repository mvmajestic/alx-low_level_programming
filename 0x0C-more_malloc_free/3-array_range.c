#include <stdlib.h>
#include "main.h"

/**
 * *array_range - will create an array of integers
 * @min: min. range of values stored
 * @max: max. range of values stored and no. of elements
 *
 * Return: pointer to new array
 */

int *array_range(int min, int max)

{
	int *abc;
	int a, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	abc = malloc(sizeof(int) * size);

	if (abc == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		abc[a] = min++;

	return (abc);
}
