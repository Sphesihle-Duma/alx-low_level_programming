#include "main.h"
/**
  * print_binary- binary digits
  * @n: number
  * Return: Nothing
  */
void print_binary(unsigned long int n)
{
	int i, count = 0;

	if (n == 0)
		_putchar (48);
	if (n == ULONG_MAX)
	{
		for (i = 0; i < 64; i++)
		{
			_putchar('1');
		}
	}
	for (i = 0; n >> i; i++)
		count++;
	for (i = count - 1; i >= 0; i--)
	{
		_putchar((n >> i & 1) ? '1' : '0');
	}
}
