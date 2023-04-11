#include "main.h"

/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: is the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	int letters_read;
	int letters_print;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	letters_read = read(fd, buffer, letters);
	if (letters_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	letters_print = write(STDOUT_FILENO, buffer, letters_read);
	if (letters_print != letters_read || letters_print == 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (letters_print);
}
