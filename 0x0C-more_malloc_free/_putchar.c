#include "main.h"
#include <unistd.h>

/**
 * _putchar - will write the char c to stdout
 * @c: character to print
 *
 * Return: On success 1 and -1 on error
 * and errno is set appropriately.
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}
