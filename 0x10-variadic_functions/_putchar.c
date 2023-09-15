#include "main.h"
#include <unistd.h>

/**
 * _putchar - will write char c to stdout
 * @c: char to print
 *
 * Return: On success 1, & -1 if otherwise
 * and errno is set appropriately.
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}
