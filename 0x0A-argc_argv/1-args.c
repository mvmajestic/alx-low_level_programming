#include <stdio.h>
#include "main.h"

/**
 * main - will print the number of arguments passed to the program
 * @argc: is the number of arguments
 * @argv: is an array of arguments
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])

{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
