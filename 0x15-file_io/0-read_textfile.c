#include "main.h"

/**
 * read_textfile - reads a text file & prints to the POSIX standard output
 * @filename: a pointer to a string containing name of file to be read
 * @letters: the number of letters to read and print from the file
 * Return: 0, if the file can not be opened or read
 * 0, if filename is NULL
 * 0, if write fails or does not write the expected amount of bytes
 * otherwise, return the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer; /* buffer to read data from */
	ssize_t open_file;
	ssize_t read_file;
	ssize_t write_file;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	open_file = open(filename, O_RDONLY);
	/* opens file and store file descriptor in open_file */
	read_file = read(open_file, buffer, letters);
	/* reads letters from file into the buffer using read and stores... */
	/* ...the number of letters read in read_file */
	write_file = write(STDOUT_FILENO, buffer, read_file);
	/* writes the buffer to the standard output using write and stores...*/
	/* ...the number of letters written in write_file*/
	if (open_file == -1 || read_file == -1 || write_file == -1
			|| write_file != read_file)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(open_file);

	return (write_file);
}
