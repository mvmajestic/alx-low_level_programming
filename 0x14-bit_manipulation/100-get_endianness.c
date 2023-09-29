#include "main.h"

/**
 * get_endianness - will check if machine is little or big endian
 * Return: 0 if big, 1 if little
 */

int get_endianness(void)

{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}


