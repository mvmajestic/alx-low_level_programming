#include "main.h"

/**
 * _strpbrk - The entry point
 * @s: the input
 * @accept: also another input
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)

{
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
		if (*s == accept[b])
		return (s);
		}
	s++;
	}

return ('\0');
}
