#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * print_text - the function to print the desired text.
 * execute function
 */

void print_text(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
