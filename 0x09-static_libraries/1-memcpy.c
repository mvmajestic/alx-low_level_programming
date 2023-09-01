#include "main.h"
/**
 *_memcpy - the function that copies memory area
 *@dest: is where the memory is stored
 *@src: is where the memory is copied
 *@n: is the number of bytes
 *
 *Return: copied memory with n bytes altered.
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
