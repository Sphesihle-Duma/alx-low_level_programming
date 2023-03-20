#include "dog.h"
#include <stdio.h>
#include <stddef.h>
/**
  * print_dog - prints dog
  * @d: pointer to a struct
  * Return: Nothing
  */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("(nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("(nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}

}
