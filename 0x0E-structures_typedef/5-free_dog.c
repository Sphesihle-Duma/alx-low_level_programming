#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
/**
  * free_dog - frees a memory
  * @d: address of a struct
  * Return: Nothing
  */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return 
	free(d->name);
	free(d->owner);
	free(d);
}
