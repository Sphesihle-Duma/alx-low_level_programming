#include "main.h"
/**
  * read_textfile - reads data from the file
  * @filename: name of the file
  * @letters: number of letters
  * Return: number of bytes on Success
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int num_of_read, fd;
	int num_of_write;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	num_of_read = read(fd, buf, letters);
	if (num_of_read < 0)
		return (0);
	num_of_write = write(STDOUT_FILENO, buf, num_of_read);
	close(fd);
	free(buf);
	return (num_of_write);
}
