#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
  * array_range - range of number in array
  * @min: minumum value
  * @max: maximun value
  * Return: pointer
  */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max || (min == 0 && max == 0))
		return (NULL);
	ptr = malloc(((max - min) + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		*(ptr + i) = min;
		min++;
	}
	return (ptr);

}
