#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - will select correct function to perform
 *               operation asked by user.
 * @s: operator passed as argument.
 *
 * Return: pointer to function corresponding
 *         to operator given as parameter.
 */

int (*get_op_func(char *s))(int, int)

{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int c = 0;

	while (ops[c].op != NULL && *(ops[c].op) != *s)
		c++;

	return (ops[c].f);
}
