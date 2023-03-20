#include "dog.h"
/**
  * init_dog - initialize a dog struct
  * @d: pointer to a struct
  * @name: name of the dog
  * @age: age of the dog
  * @owner: onwer of the dog
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
