#include "function_pointers.h"
#include <stddef.h>
/**
  * array_iterator - iterates in an array
  * @array: array of integers
  * @size: size of the array
  * @action: fuction pointer
  * Return: Nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
