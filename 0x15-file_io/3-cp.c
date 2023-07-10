#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * print_error - checks if files can be opened.
 * @message: pointer to error messages.
 * Return: no return.
 */
void print_error(const char *message)
{
	dprintf(2, "%s\n", message);
	exit(1);
}

/**
 * copy_file - function to copy file to another.
 * @file_from: file from
 * @file_to: file to
 *
 * Return: no return
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	ssize_t n_read, n_write;
	char buffer[BUFFER_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		print_error("Error: Can't read from file");

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (fd_to == -1)
		print_error("Error: Can't write to file");

	while ((n_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		n_write = write(fd_to, buffer, n_read);
		if (n_write == -1)
			print_error("Error: Can't write to file");
	}
	if (n_read == -1)
		print_error("Error: Can't read from file");

	if (close(fd_from) == -1)
		print_error("Error: Can't close file descriptor");

	if (close(fd_to) == -1)
		print_error("Error: Can't close file descriptor");
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	const char *file_from;
	const char *file_to;

	if (argc != 3)
		print_error("Usage: cp file_from file_to");

	file_from = argv[1];
	file_to = argv[2];

	copy_file(file_from, file_to);

	return (0);
}
