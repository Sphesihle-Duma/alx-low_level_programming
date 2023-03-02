#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	i = 1;
	for (j = 0; j < n / 2; j++)
	{
		temp = a[j];
		a[j] = a[n - i];
		a[n - i] = temp;
		i++;
	}
}
