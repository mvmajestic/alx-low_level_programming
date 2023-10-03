#include "main.h"

/**
 * create_file - will create a file.
 * @filename: pointer to name of file to create.
 * @text_content: pointer to string to write to file.
 *
 * Return: If function fails -1 or 1 if otherwise.
 */

int create_file(const char *filename, char *text_content)

{
	int fd, j, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	j = write(fd, text_content, len);

	if (fd == -1 || j == -1)
		return (-1);

	close(fd);

	return (1);
}
