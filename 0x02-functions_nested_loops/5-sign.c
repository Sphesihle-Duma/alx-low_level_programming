#include "main.h"
/**
  * print_sign - checks the sign of the entered number
  *
  * @n: number to be checked
  * Return: 1 if positive and 0 if zero
  * -1 if negative and their signs.
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);

	}
}
