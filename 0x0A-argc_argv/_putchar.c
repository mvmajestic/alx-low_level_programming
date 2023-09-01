#include <stdio.h>
#include "main.h"

/**
 * _putchar - will write the character c to stdout
 * @c: char to print
 *
 * Return: On success 1, or -1 if there is an error
 * And errno is appropriately set.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
