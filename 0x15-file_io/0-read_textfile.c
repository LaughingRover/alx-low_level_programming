#include "main.h"

/**
 * read_textfile- reads a text file and prints it to the POSIX standard output.
 * @filename: name of file
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, read_bytes, write_bytes;
	char *buffer = malloc(letters);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDWR);
	if (file == -1)
	{
		free(buffer);
		return (0);
	}

	read_bytes = read(file, buffer, letters);
	if (read_bytes == -1)
	{
		close(file);
		free(buffer);
		return (0);
	}

	write_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	if (write_bytes == -1 || write_bytes != read_bytes)
	{
		close(file);
		free(buffer);
		return (0);
	}

	close(file);
	free(buffer);
	return (read_bytes);
}

