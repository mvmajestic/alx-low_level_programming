#include <stdlib.h>
#include "main.h"

/**
 * *_memset - will fill memory with a constant byte
 * @s: memory area to fill
 * @b: the character to copy
 * @n: no. of times to copy b
 *
 * Return: pointer to memory area s.
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}

/**
 * *_calloc - will allocate memory for an array
 * @nmemb: no. of elements in the array
 * @size: size of elements
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	char *abc;

	if (nmemb == 0 || size == 0)
		return (NULL);

	abc = malloc(size * nmemb);

	if (abc == NULL)
		return (NULL);

	_memset(abc, 0, nmemb * size);

	return (abc);
}
