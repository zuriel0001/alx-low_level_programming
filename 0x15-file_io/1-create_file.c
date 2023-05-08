#include "main.h"

/**
 * create_file - a function that creates file
 *
 * @filename: name to be given to file
 * @text_content: what the file contains
 *
 * Return: 1 on success, -1 on failure
 *        -1 if filename is NULL or
 */

int create_file(const char *filename, char *text_content)
{
	int fd, num_bw, text_len;

	if (filename == NULL)
		return (-1);

	/* if text_content is not null, find the length of text_content */
	text_len = 0;
	if (text_content != NULL)
	{
		while (text_content[text_len])
			text_len++;
	}

	/* create the file with the given filename */
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	/* write the text_content into the file */
	num_bw = write(fd, text_content, text_len);

	/* check if the file descriptor or write operation failed */
	if (fd == -1 || num_bw == -1)
		return (-1);

	/* close the file descriptor */
	close(fd);

	return (1);
}

