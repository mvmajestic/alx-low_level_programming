#include "main.h"

/**
 * print_binary - will print binary equivalent of decimal number
 * @n: the number to print in binary
 */

void print_binary(unsigned long int n)

{
	int a, num = 0;
	unsigned long int current;

	for (a = 63; a >= 0; a--)
	{
		current = n >> a;

		if (current & a)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
