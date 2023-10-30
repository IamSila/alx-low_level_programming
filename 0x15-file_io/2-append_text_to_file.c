#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d;
	int n_letters;
	int read_write;

	if (!filename)
		return (-1);

	file_d = open(filename, O_WRONLY | O_APPEND);

	if (file_d == -1)
		return (-1);

	if (text_content)
	{
		for (n_letters = 0; text_content[n_letters]; n_letters++)
			;

		read_write = write(file_d, text_content, n_letters);

		if (read_write == -1)
			return (-1);
	}

	close(file_d);

	return (1);
}
