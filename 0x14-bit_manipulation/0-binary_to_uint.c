#include "main.h"
/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: binary to be converted
  * Return: unsigned int
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, sum = 0;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		sum = (sum * 2) + (b[i] - 48);
	}
	return (sum);
}
