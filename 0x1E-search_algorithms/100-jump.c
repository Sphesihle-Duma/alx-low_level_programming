#include <math.h>
#include "search_algos.h"
/**
 * my_linear_search - performs linear search within a block of the array
 * @array: pointer to the first element of the array
 * @start: starting index of the block
 * @size: number of elements in the array
 * @value: value to search for
 * Return: the index where value is located, or -1 if not found
 */
int my_linear_search(int *array, int start, size_t size, int value)
{
	int i;

	for (i = start; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		else if (array[i] > value)
			break;
	}
	return (-1);
}

/**
 * jump_search - searches a value using jump search algo
 * @array: array to the tested
 * @size: size of the array
 * @value: value to be searched
 * Return: index of value on success otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	int step = (int)sqrt(size);
	int end, start = 0;

	if (size == 0 || array == NULL)
		return (-1);
	while(array[start] < value)
	{
		end = start + step;
		if (end >= (int)size)
			end = size;
		printf("Value checked array[%d] = [%d]\n", start, array[start]);
		if (array[start] <= value && array[end - 1] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", start, end);
				break;
		}
		start = end;
	}
	return my_linear_search(array, start, size, value);
}
