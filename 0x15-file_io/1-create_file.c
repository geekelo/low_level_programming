#include "main.h"
#include <stdlib.h>

/**
 * create_file - creates a file and writes to it if
 * text_content is not NULL
 * @filename: the name of the file
 * @text_content: content to write into the created file
 * Return: 1 on success and -1 on failure
 */


int create_file(const char *filename, char *text_content)
{
	int wr, op, len = 0;

	if (filename == NULL)
		return (-1);
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		wr = write(op, text_content, len);
	}

	if (op < 0 || wr < 0)
		return (-1);

	close(op);
	return (1);
}

