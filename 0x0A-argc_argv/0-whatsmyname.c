#include <stdio.h>
#include "main.h"

/**
 * main - will print the name of the program
 * @argc: is the number of arguments
 * @argv: is an array of arguments
 *
 * Return: 0 on success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
