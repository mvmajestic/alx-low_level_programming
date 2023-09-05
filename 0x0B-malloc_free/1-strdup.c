#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - will duplicate str to new memory space location
 * @str: char to print
 * Return: 0 on success.
 */

char *_strdup(char *str)

{
	char *abc;
	int i = 0; 
	int j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	abc = malloc(sizeof(char) * (i + 1));

	if (abc == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		abc[j] = str[j];

	return (abc);
}
