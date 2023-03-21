#include "dog.h"
#include <stdlib.h>
/**
  * free_dog - frees a memory
  * @d: address of a struct
  * Return: Nothing
  */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
