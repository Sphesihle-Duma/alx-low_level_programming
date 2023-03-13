#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
  * create_array - creates an array and fills it
  * with a character
  * @size: size of array
  * @c: character
  * Return: pointer on success or NULL if it fails
  */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = (char *)malloc(sizeof(c) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}
	return (ptr);
}
