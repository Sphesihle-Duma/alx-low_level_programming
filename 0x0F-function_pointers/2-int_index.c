#include "function_pointers.h"
/**
  * int_index - searches an integer
  * @array: array of integers
  * @size: size of an array
  * @cmp: function pointer
  * Return: index of an element if search is successful
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (cmp && array)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);

}
