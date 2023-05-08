#include "main.h"
/**
  * create_file - creates a file
  * @filename: file to be created
  * @text_content: texts to write
  * Return: 1 on Success and -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int fd, i, count = 0;
	int num_of_write;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (i = 0; text_content[i] != '\0'; i++)
		count++;
	num_of_write = write(fd, text_content, count);
	if (num_of_write == -1)
		return (-1);
	close(fd);
	return (1);
}

