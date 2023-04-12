#include "main.h"
/**
  * file_error - prints error message
  * @source: file to copy from
  * @dest: file to write to
  * @argv: array of strings
  * Return: nothing
  */
void file_error(int source, int dest, char *argv[])
{
	if (source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
  * main - main method
  * @argc: number of arguments
  * @argv: array of strings
  * Return: 0 on Success
  */
int main(int argc, char *argv[])
{
	int fds, fd_d, num_of_read = 1024;
	int num_of_write, closeInt;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	if (!argv[1] || !argv[2])
	{
		dprintf(STDERR_FILENO, "%s\n", "Error");
		exit(0);
	}
	fds = open(argv[1], O_RDONLY);
	fd_d = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	file_error(fds, fd_d, argv);
	while (num_of_read == 1024)
	{
		num_of_read = read(fds, buf, 1024);
		if (num_of_read == -1)
			file_error(-1, 0, argv);
		num_of_write = write(fd_d, buf, num_of_read);
		if (num_of_write == -1)
			file_error(0, -1, argv);
	}
	closeInt = close(fds);
	if (closeInt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fds);
		exit(100);
	}
	if (closeInt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_d);
	}
	return (0);
}
