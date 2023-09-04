#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write "fails", etc)
 * The created file must have those permissions: rw----.
 * If the file already exists, do not change the permissions.
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */

int create_file(const char *filename, char *text_content)
{
	int open_file = 0; /* store the file descriptor for open function */
	int write_file = 0; /* store number of letters written */
	int len = 0; /* length of @text_content */
	mode_t mode = S_IRUSR | S_IWUSR;
/* S_IRUSR: read permission for the file owner */
/* S_IWUSR: Write permission for the file owner */

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
/* loops through the string & counts its length, storing it in len */
	open_file = open(filename, O_CREAT | O_RDWR | O_TRUNC, mode);
/*
 * The open function creates and opens the file with the given filename.
 * It passes 3 flags to the function: O_CREAT, O_RDWR, and O_TRUNC.
 * These flags mean that the file will be created if it doesn'exist,
 * opened for reading and writing, and truncated to zero length
 * if it already exists. It also passes a mode argument of 0600,
 * which means that only the owner of the file can read and write to it.
 * The function returns a file descriptor, which is stored in open_file
 */
	write_file = write(open_file, text_content, len);

	if (open_file == -1 || write_file == -1)
		return (-1);
/*
 * checks if either open_file or write_file are equal to -1.
 * If so, either the open or write function failed, returns -1
 */
	close(open_file); /* close the file descriptor open_file */
	return (1);
}
