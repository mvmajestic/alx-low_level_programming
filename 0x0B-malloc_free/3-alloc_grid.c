#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - will allocate a 2D array of integers to make grid
 * @width: the width input
 * @height: the height input
 * Return: pointer to 2 dimensional array
 */

int **alloc_grid(int width, int height)

{
	int a, b;
	int **xyz;

	if (width <= 0 || height <= 0)
		return (NULL);

	xyz = malloc(sizeof(int *) * height);

	if (xyz == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		xyz[a] = malloc(sizeof(int) * width);

		if (xyz[a] == NULL)
		{
			for (; a >= 0; a--)
				free(xyz[a]);

			free(xyz);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			xyz[a][b] = 0;
	}

	return (xyz);
}
