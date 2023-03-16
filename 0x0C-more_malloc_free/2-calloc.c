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

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
