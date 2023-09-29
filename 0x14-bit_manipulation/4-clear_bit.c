#include "main.h"

/**
 * clear_bit - will set value of given bit to 0
 * @n: the pointer to number to change
 * @index: index of bit to clear
 *
 * Return: 1 if success, -1 if failure
 */

int clear_bit(unsigned long int *n, unsigned int index)

{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
