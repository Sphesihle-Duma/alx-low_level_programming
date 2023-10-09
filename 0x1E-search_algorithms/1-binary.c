#include "search_algos.h"
/**
 * binary_search - searches a value using binary search
 * @array: The array to be searched
 * @size: The size of the array
 * @value: value to be searched
 * Return: index of the value on success otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	int i, high, low, mid;

	if (!array || size == 0)
		return (-1);
	high = (int)size - 1;
	low = 0;
	mid = (low + high) / 2;
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");
		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
