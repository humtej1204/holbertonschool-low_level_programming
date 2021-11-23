#include "main.h"

/**
 * read_textfile - reads a text file
 * @filename: path of the file to read
 * @letters: number of letters to read and print
 * Return: number of letters readed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int count, fd_o, fd_r;

	if (filename == NULL)
		return (0);

	/* Open file and get file descriptor */
	fd_o = open(filename, O_RDONLY);
	if (fd_o == -1)
		return (0);

	/* allocate memory in buffer to read contents of fd */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/* read contents of fd */
	fd_r = read(fd_o, buffer, letters);
	if (fd_r == 0)
	{
		free(buffer);
		close(fd_o);
		return (0);
	}

	/* write to standard output */
	count = write(STDOUT_FILENO, buffer, fd_r);
	if (count == -1)
	{
		free(buffer);
		close(fd_r);
		close(fd_o);
		return (0);
	}
	close(fd_r);
	close(fd_o);

	return (count);
}
