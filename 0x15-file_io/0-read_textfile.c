#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output.
 * @filename: pointer to the name of the file passed in
 * @letters: no of letters to be read and printed
 * Return: 0 on failure and w if successful
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer = NULL;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(buffer) * letters);

	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	return (w);
}

