#include "main.h"
#include <stdio.h>


/**
* main - entry point
*        a function that copy the content from a file to another
* @argc: argument count
* @argv: array of arguments
*
* Return: Always 0 Success
*/

int main(int argc, char *argv[])
{
	int fd1, fd2, write_val;
	ssize_t num_bw = 1024;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99); }
	while (num_bw == 1024)
	{
		num_bw = read(fd1, buffer, 1024);
		if (num_bw == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		write_val = write(fd2, buffer, num_bw);
		if (write_val == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99); }}
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100); }
	if (close(fd2) == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100); }
	return (0);
}
