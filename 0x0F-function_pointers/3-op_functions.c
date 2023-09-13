#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - will return sum of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: sum of a and b.
 */

int op_add(int a, int b)

{
	return (a + b);
}

/**
 * op_sub - will return difference of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: difference of a and b.
 */

int op_sub(int a, int b)

{
	return (a - b);
}

/**
 * op_mul - will return product of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: product of a and b.
 */

int op_mul(int a, int b)

{
	return (a * b);
}

/**
 * op_div - will return division of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: quotient of a and b.
 */

int op_div(int a, int b)

{
	return (a / b);
}

/**
 * op_mod - will return remainder of division of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: remainder of division of a by b.
 */

int op_mod(int a, int b)

{
	return (a % b);
}
