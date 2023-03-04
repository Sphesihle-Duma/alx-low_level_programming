#include "main.h"
/**
  * print_number - prints a number
  * Descrition: prints every digit of number
  * @n: number
  * Return: nothing
  */
void print_number(int n)
{
	int control = 1;
	int updated = n;

	if (n < 0)
	{
		n *= -1;
		updated = n;
		_putchar(45);
	}
	while (updated > 9)
	{
		control *= 10;
		updated /= 10;
	}
	while (control >= 1)
	{
		_putchar((n / control) % 10 + 48);
		control /= 10;
	}
}
