#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
/**
  * new_dog - creates a new dog
  * @name: name of the dog
  * @age: age of the dog
  * @owner: owner of the dog
  * Return: pointer
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	char *name_copy;
	char *owner_copy;
	int len_name, len_owner, i;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	len_name = 0;
	len_owner = 0;
	while (*(name + len_name))
		len_name++;
	while (*(owner + len_owner))
		len_owner++;
	name_copy = malloc(sizeof(char) * (len_name + 1));
	owner_copy = malloc(sizeof(char) * (len_owner + 1));
	if (name_copy == NULL || owner_copy == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		name_copy[i] = name[i];
	name_copy[i] = '\0';
	for (i = 0; owner[i] != '\0'; i++)
		owner_copy[i] = owner[i];
	owner_copy[i] = '\0';
	ptr->name = name_copy;
	ptr->owner = owner_copy;
	ptr->age = age;
	return (ptr);
}
