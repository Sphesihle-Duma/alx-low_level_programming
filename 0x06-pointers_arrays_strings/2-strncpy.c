#include "main.h"
/**
  * _strncpy - copies a string
  * @dest: destination
  * @src: source
  * @n: number of characters
  * Return: pointer of copied string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int num_of_chars, i, j;

	num_of_chars = 0;
	for (i = 0; *(src + i) != '\0'; i++)
	{
		num_of_chars++;
	}
	if (n <= num_of_chars)
	{
		for (j = 0; j < n; j++)
		{
			dest[j] = src[j];
		}
		dest[n] = '\0';
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			if (src[j] == '\0')
			{
				dest[j] = '\0';
				break;
			}
			dest[j] = src[j];
		}
	}
	return (dest);
}
