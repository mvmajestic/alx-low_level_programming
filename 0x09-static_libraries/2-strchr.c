#include "main.h"
#include <stddef.h>

/**
 * _strchr - the entry point
 * @s: the input value
 * @c: also the input value
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)

{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
