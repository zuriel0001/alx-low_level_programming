#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 *
 * @filename: pointer the file whose content will be edited
 * @text_content: pointer to txt to be added.
 *
 * Return: 1 on success and -1 on failure, -1 if filname is NULL
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int num_bw;
	int txt_len;

	if (filename == NULL)
		return (-1);


	/* if text_content is not null, find the length of text_content */
	txt_len = 0;
	if (text_content != NULL)
	{
		while (text_content[txt_len])
		{
			txt_len++;
		}
	}
	/* Open the file with a given filename in write-only mode with append option*/
	file_descriptor = open(filename, O_WRONLY | O_APPEND);

	/* write the text_content to the end of the file */
	num_bw = write(file_descriptor, text_content, txt_len);

	/* checking if the file descriptor or write operation failed */
	if (file_descriptor == -1 || num_bw == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}
