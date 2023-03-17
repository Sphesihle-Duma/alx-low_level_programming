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

	result = malloc(new_size);
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		if (result == NULL)
			return (NULL);
		else
			return (result);
	}
	if (new_size == 0 && ptr == NULL)
		free(ptr);
	if (new_size > old_size)
	{
		if (result != NULL && ptr != NULL)
			return (ptr);
		else
			return (NULL);
	}
	free(ptr);
	return (result);
}
