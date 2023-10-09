#include "search_algos.h"
/**
 * linear_search - searches for a value in array
 * @array: The array to be searched
 * @size: size of the array
 * @value: The value to be searched
 * Return: first index on Success otherwise 0
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (size == 0 || array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return -1;
}
