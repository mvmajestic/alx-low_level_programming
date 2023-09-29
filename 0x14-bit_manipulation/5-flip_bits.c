#include "main.h"

/**
 * flip_bits - will count number of bits to change
 * to go from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	int a, num = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = exclusive >> a;
		if (current & 1)
			num++;
	}

	return (num);
}

