#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- will read thee text file print to STDOUT.
 * @filename: the text file being read
 * @letters: the number of letters to be read
 * Return: w - is the actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
	char *bf;
	ssize_t fd;
	ssize_t i;
	ssize_t j;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bf = malloc(sizeof(char) * letters);
	j = read(fd, bf, letters);
	i = write(STDOUT_FILENO, bf, j);

	free(bf);
	close(fd);
	return (i);
}
