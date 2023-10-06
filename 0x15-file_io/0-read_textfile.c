#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- This read's text file print to STDOUT
 * @filename: A text file being read
 * @letters: The number of letters to be read
 * Return: f- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fl;
	ssize_t f;
	ssize_t a;

	fl = open(filename, O_RDONLY);
	if (fl == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	a = read(fd, buf, letters);
	f = write(STDOUT_FILENO, buf, a);

	free(buf);
	close(fl);
	return (f);
}

