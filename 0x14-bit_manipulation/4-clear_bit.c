#include "main.h"
/**
  * clear_bit- a bit to zero at specified 0
  * @n: pointer to an unsigned long int
  * @index: index of a bit
  * Return: 1 on Success or 0 on fail
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1UL << index;
	if ((*n & mask) == 0)
		return (1);
	*n ^= mask;
	return (1);
}

