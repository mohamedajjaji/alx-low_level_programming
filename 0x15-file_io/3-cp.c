#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NR "Error: Can't read from file %s\n"
#define ERR_NW "Error: Can't write to %s\n"
#define ERR_NC "Error: Can't close fd %s\n"

/**
 * main - copies the content of a file to another file
 * @argc: the number of arguments supplied to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 on success
 *
 * Description:
 * If the argument count is incorrect - exit code 97
 * If file_from does not exist or cannot be read - exit code 98
 * If file_to cannot be created or written to - exit code 99
 * If file_to or file_from cannot be closed - exit code 100
 */
int main(int argc, char *argv[])
{
	int fFrom, fTo, r, w;
	char *fileFrom = argv[1], *fileTo = argv[2], *buffer;

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);

	fFrom = open(fileFrom, O_RDONLY);
	if (fFrom == -1)
		dprintf(STDERR_FILENO, ERR_NR, fileFrom), exit(98);

	fTo = open(fileTo, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fTo == -1)
		dprintf(STDERR_FILENO, ERR_NW, fileTo), exit(99);

	buffer = malloc(sizeof(char) * 1024);
	while ((r = read(fFrom, buffer, 1024)) > 0)
	{
		w = write(fTo, buffer, r);
		if (w != r)
			dprintf(STDERR_FILENO, ERR_NW, fileTo), exit(99);
	}

	if (r == -1)
		dprintf(STDERR_FILENO, ERR_NR, fileFrom), exit(98);

	if (close(fFrom) == -1)
		dprintf(STDERR_FILENO, ERR_NC, fileFrom), exit(100);

	if (close(fTo) == -1)
		dprintf(STDERR_FILENO, ERR_NC, fileTo), exit(100);

	return (0);
}
