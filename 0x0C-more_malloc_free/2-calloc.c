#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
  * _calloc - allocates a memory for an array
  * @nmemb: number of elements
  * @size: size of each element
  * Return: pointer
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		((char *)ptr)[i] = 0;
	return (ptr);
}
