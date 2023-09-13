#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - will print name using pointer to function
 * @name: the string to add
 * @f: the pointer to function
 * Return: Nothing
 **/

void print_name(char *name, void (*f)(char *))

{
	if (name == NULL || f == NULL)
		return;

	f(name);
}