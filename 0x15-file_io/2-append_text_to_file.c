#include "main.h"
/**
  * append_text_to_file - appends a texts at the end of file
  * @filename: name of the file to append to
  * @text_content: texts to append
  * Return: 1 on Success or -1 on fail
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, count = 0;
	int num_of_write;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			count++;
		num_of_write = write(fd, text_content, count);
		if (num_of_write == -1)
			return (-1);
	}
	return (1);
}

