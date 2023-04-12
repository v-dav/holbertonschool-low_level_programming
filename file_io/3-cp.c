#include "main.h"

/**
 * create_buffer - a function that creates a buffer of specific size
 * @buffer_size: a size of wanted buffer in bytes
 *
 * Return: the address of the created buffer in memory
 */
char *create_buffer(ssize_t buffer_size)
{
	char *buffer = malloc(sizeof(char) * buffer_size);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Memory allocation failed\n");
		exit(96);
	}
	return (buffer);
}

/**
 * error_message - a function that displays an error message
 * @msg: the error message to display
 * @exit_code: the exit code
 * @filename: the name of the file to display
 *
 * Return: void
 */
void error_message(char *msg, int exit_code, char *filename)
{
	dprintf(STDERR_FILENO, "%s %s\n", msg, filename);
	exit(exit_code);
}

/**
 * close_file - a function that closes an open file
 * @fd: a file description that identifies the file
 *
 * Return: void
 */
void close_file(int fd)
{
	int result = close(fd);

	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - a program that copies the content of a file to another file
 * @argc: number of arguments on command line (max 3)
 * @argv: array
 * of pointers to the strings which are those arguments
 * (file to copy content from and then the file to copy the content to)
 *
 * Description: Usage: cp file_from file_to.
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int fd_src, fd_dest, open_flags;
	char *buffer, *write_buffer;
	ssize_t bytes_read, written_to, bytes_to_write;
	mode_t permissions;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(1024);
	open_flags = O_WRONLY | O_CREAT | O_TRUNC;
	permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_src = open(argv[1], O_RDONLY);
	fd_dest = open(argv[2], open_flags, permissions);
	if (fd_src == -1)
		error_message("Error: Can't read from file", 98, argv[1]);
	while ((bytes_read = read(fd_src, buffer, 1024)) > 0)
	{
		bytes_to_write = bytes_read;
		write_buffer = buffer;
		while (bytes_to_write > 0)
		{
			written_to = write(fd_dest, write_buffer, bytes_to_write);
			if (fd_dest == -1 || written_to == -1)
			{
				close(fd_src);
				error_message("Error: Can't write to", 99, argv[2]);
			}
			bytes_to_write -= written_to;
			write_buffer += written_to;
		}
	}
	if (bytes_read == -1)
		error_message("Error: Can't read from file", 98, argv[1]);

	close_file(fd_src);
	close_file(fd_dest);
	free(buffer);
	return (0);
}
