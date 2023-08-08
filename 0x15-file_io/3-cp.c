#include "main.h"

char *create_buffer(char *file_name);
void close_filename(int fd);

/**
 * create_buffer - function that allocates 1024 bytes to a buffer.
 * @file_name: the file name that  buffer is storing letters for.
 * Return: a pointer to the buffer that is newly-allocated
 */
char *create_buffer(char *file_name)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file_name);
		exit(99);
	}

	return (buffer);
}

/**
 * close_filename - function closes file descriptors.
 * @fd: is the file descriptor to be closed.
 */
void close_filename(int fd)
{
	int k;

	k = close(fd);

	if (k == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - function copies contents from a file to another file.
 * @argc: argument counts passed to the program.
 * @argv: aarray of pointers to the arguments.
 * Return: 0 for a successful program
 * exit code 97 for wrong @argc
 * exit code 98 if file doesn't exist or can't be read
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */

int main(int argc, char *argv[])
{
	int from_file, to_file, read_file, write_file;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from_file = open(argv[1], O_RDONLY);
	read_file = read(from_file, buffer, 1024);
	to_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, mode);

	do {
		if (from_file == -1 || read_file == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		write_file = write(to_file, buffer, read_file);
		if (to_file == -1 || write_file == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		read_file = read(from_file, buffer, 1024);
		to_file = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_file > 0);

	free(buffer);
	close_filename(from_file);
	close_filename(to_file);

	return (0);
}
