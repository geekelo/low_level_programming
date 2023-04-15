#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: is the name of the file and
 * @text_content: is the NULL terminated string to add at
 * the end of the file
 * Return: 1 if successful and -1 if unsuccesfull
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int wr, o, len = 0;

	o = open(filename, O_WRONLY | O_APPEND);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		wr = write(o, text_content, len);
	}
	if (o < 0 || wr < 0)
		return (-1);
	close(o);
	return (1);
}

