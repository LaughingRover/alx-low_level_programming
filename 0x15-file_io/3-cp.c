#include "main.h"

#define BUFFER_SIZE 1024

static char buffer[BUFFER_SIZE];

/**
 * exit_with_error - writes message to stderr and exits with error code
 * @code: error code
 * @message: error message
 * @filename: file name
 */
void exit_with_error(int code, const char *message, const char *filename)
{
	dprintf(STDERR_FILENO, "Error: %s %s\n", message, filename);
	exit(code);
}

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	ssize_t bytes_read, bytes_written;
	const char *file_from, *file_to;
	int fd_src, fd_dest;

	if (argc != 3)
		exit_with_error(97, "Usage: cp file_from file_to", "");

	file_from = argv[1];
	file_to = argv[2];
	fd_src = open(file_from, O_RDONLY);
	if (fd_src == -1)
		exit_with_error(98, "Can't read from file %s", file_from);

	fd_dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC,
		       S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_dest == -1)
	{
		close(fd_src);
		exit_with_error(99, "Can't write to %s", file_to);
	}
	while ((bytes_read = read(fd_src, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_dest, buffer, bytes_read);
		if (bytes_written == -1)
		{
			close(fd_src);
			close(fd_dest);
			exit_with_error(99, "Can't write to %s", file_to);
		}
	}
	if (bytes_read == -1)
	{
		close(fd_src);
		close(fd_dest);
		exit_with_error(98, "Can't read from file %s", file_from);
	}
	if (close(fd_src) == -1 || close(fd_dest) == -1)
		exit_with_error(100, "Can't close fd %s",
		(fd_src) ? file_from : file_to);
	return (0);
}
