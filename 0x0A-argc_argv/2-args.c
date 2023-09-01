#include <stdio.h>
#include "main.h"

/**
 * main - will print all arguments it receives
 * @argc: is the number of arguments
 * @argv: is an array of arguments
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])

{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
