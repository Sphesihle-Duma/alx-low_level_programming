#include "main.h"
/**
  * get_bit - searches for a bit at a specified index
  * @n: number to be convert into binary
  * @index: index of a bit
  * Return: bit
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);
	for (i = 0; i < 64; n >>= 1, i++)
	{
		if (i == index)
		{
			return (n & 1);
		}
	}
	return (-1);
}
