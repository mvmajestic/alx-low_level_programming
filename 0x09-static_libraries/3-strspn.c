#include "main.h"

/**
 * _strspn - The entry point
 * @s: the input
 * @accept: another input
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)

{
	unsigned int n = 0;
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				a++;
				break;
			}
			else if (accept[a + 1] == '\0')
				return (n);
		}
		a++;
	}
	return (n);
}
