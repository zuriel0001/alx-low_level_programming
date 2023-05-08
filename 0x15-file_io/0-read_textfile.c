#include "main.h"


/**
* read_textfile - a function that eads a text file and
*                 prints its contents to stdout.
*
* @filename: name of the file to read and printed
* @letters: munber of letters the file contains
*
* Return: number of letters read and printed,
*         or 0 if an error occurred.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor, num_bytes_read;
	char *buffer;

	if (filename == NULL)
		return (0);

	/* allocate memory for the buffer to store letters*/
	buffer = malloc(letters * sizeof(char));

	if (buffer == NULL)
		return (0);

	/* open the file for reading */
	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
		return (0);

	/* read from the file and write to stdout */
	num_bytes_read = write(STDOUT_FILENO, buffer,
			read(file_descriptor, buffer, letters));
	if (num_bytes_read == -1)
		return (0);

	/* close the file and free the buffer */
	close(file_descriptor);
	free(buffer);

	return (num_bytes_read);
}

