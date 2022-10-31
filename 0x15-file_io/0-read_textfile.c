#include "main.h"

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - a function that reads a text file and prints it to the
 * POSIX standard output.
 * @filename: the file to be read
 * @letters:  is the number of letters it should read and print
 *
 * Return:  the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;

	ssize_t r, n;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	r = read(fd, buf, letters);

	n = write(STDOUT_FILENO, buf, r);

	close(fd);

	free(buf);

	return (n);
}
