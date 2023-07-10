#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: The name of the file to append to
 * @text_content: The NULL-terminated string to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, w, len = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

	w = write(file, text_content, len);
	if (file == -1 || w == -1)
		return (-1);
	}
	close(file);
	return (1);
}
