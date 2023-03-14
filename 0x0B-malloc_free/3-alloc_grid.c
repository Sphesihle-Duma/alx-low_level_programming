#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
  * alloc_grid - creates a two dimensional array
  * @width: number of columns
  * @height: number of rows
  * Return: pointer to pointer
  */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width == 0 || width < 0)
		return (NULL);
	if (height == 0 || height < 0)
		return (NULL);
	ptr = (int **)malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(sizeof(int) * width);

		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(ptr[j]);
			}
			free(ptr);
		}
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
