#include "main.h"
/**
  * print_binary- binary digits
  * @n: number
  * Return: Nothing
  */
void print_binary(unsigned long int n)
{
	if (n / 2)
		print_binary(n / 2);
	_putchar(n % 2 + 48);
}
