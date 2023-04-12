#include "main.h"

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
	int fd_src, fd_dest, close_src, close_dest, open_flags;
	char *buffer, *write_buffer;
	ssize_t bytes_read, written_to, buffer_size, bytes_to_write;
	mode_t permissions;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer_size = 1024;
	buffer = malloc(sizeof(char) * buffer_size);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Memory allocation failed\n");
		exit(96);
	}
	open_flags = O_WRONLY | O_CREAT | O_TRUNC;
	permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_src = open(argv[1], O_RDONLY);
	fd_dest = open(argv[2], open_flags, permissions);

	if (fd_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	while ((bytes_read = read(fd_src, buffer, buffer_size)) > 0)
	{
		bytes_to_write = bytes_read;
		write_buffer = buffer;
		while (bytes_to_write > 0)
		{
			written_to = write(fd_dest, write_buffer, bytes_to_write);
			if (fd_dest == -1 || written_to == -1)
			{
				close(fd_src);
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				exit(99);
			}
			bytes_to_write -= written_to;
			write_buffer += written_to;
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit (98);
	}

	close_src = close(fd_src);
	close_dest = close(fd_dest);

	if (close_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close_src);
		exit (100);
	}
	if (close_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close_dest);
		exit (100);
	}

	free(buffer);
	return (0);
}
