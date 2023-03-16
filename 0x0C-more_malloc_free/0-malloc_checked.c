#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
  * malloc_checked - checks if return value is not null
  * @b: unsigned integer
  * Return: void pointer
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(b));
	if (ptr == NULL)
		exit(98);
	return (ptr);

}
