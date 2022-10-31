#include "main.h"
#include <string.h>

/**
 * create_file - Create a function that creates a file.
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 *
 * Return: 1 on success, -1 on failure (file can not be created, file can not
 * be written, write “fails”, etc…)
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */

int create_file(const char *filename, char *text_content)
{
	int fd, n;
	ssize_t w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	n = sizeof(text_content);
	w = write(fd, text_content, n);
	if (w == -1)
		return (-1);

	return (1);
}
