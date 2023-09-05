#include "main.h"
#include <unistd.h>

/**
 * _putchar - will write the character c to stdout
 * @c: char to print
 *
 * Return: On success 1.
 * and -1 on error, and errno is appropriately set.
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}
