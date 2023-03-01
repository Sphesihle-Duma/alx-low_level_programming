#include "main.h"
/**
  * _strncat - concanates two strings
  * Description: The _strncat function is similar to the _strcat function,
  * except that it will use at most n bytes from src; and
  * src does not need to be null-terminated if it contains n or more bytes
  * Return a pointer to the resulting string dest
  * @dest: destination
  * @src: source
  * @n: number of characters
  * Return: dest pointer
  */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, num_of_byte;

	i = 0;
	num_of_byte = 1;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	for (j = 0; *(src + j) != '\0'; j++)
	{
		num_of_byte++;
	}
	if (n >= num_of_byte)
	{
		for (j = 0; j < n; j++)
		{
			*(dest + i) = src[j];
			i++;
		}
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			dest[i] = src[j];
			i++;
		}
		*(dest + i) = '\0';
	}
	return (dest);
}
