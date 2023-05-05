#include "main.h"
/**
  * flip_bits - calculates the number of bits to be fliped
  * @n: first number
  * @m: second number
  * Return: number of bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = m ^ n;
	unsigned int count = 0;

	while (xor > 0)
	{
		count += (xor & 1);
		xor = xor >> 1;
	}

	return (count);
}

