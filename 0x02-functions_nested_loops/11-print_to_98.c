#include <stdio.h>
#include "main.h"
/**
  * print_to_98 - Prints number within the range
  *
  * @n: first number of the range
  * Return: prints numbers
  */
void print_to_98(int n)
{
	int k;

	if (n < 98)
	{
		for (k = n; k <= 98; k++)
		{
			if (k == 98)
			{
				printf("%d", k);
			}
			else
			{
				printf("%d, ", k);
			}
		}
	}
	else
	{
		for (k = n; k >= 98; k--)
		{
			if (k == 98)
			{
				printf("%d", k);
			}
			else
			{
				printf("%d, ", k);
			}
		}
	}
	printf("\n");
}
