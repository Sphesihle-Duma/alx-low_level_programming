#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
  * _realloc - resize the block of memory
  * @ptr: - pointer that points to previous block of memory
  * @old_size: size of old block of memory
  * @new_size: size of new block of memory
  * Return: pointer of new block
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *result;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	result = malloc(new_size);
	if (ptr == NULL)
	{
		if (result == NULL)
			return (NULL);
		return (result);
	}
	if (result != NULL && ptr != NULL)
	{
		for (i = 0; i < old_size && i < new_size; i++)
			((char *)result)[i] = ((char *)ptr)[i];
	}
	else
	{
		return (NULL);
	}
	free(ptr);
	return (result);
}
