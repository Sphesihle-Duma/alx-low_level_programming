#include "main.h"
/**
  * print_last_digit - Prints the last digit of a
  * given number
  *
  * @number: number to be put in function.
  * Return: the last digit
  */
int print_last_digit(int number)
{
	int last_digit;

	last_digit = number % 10;
	if (last_digit < 0)
	{
		_putchar(last_digit * -1 + '0');
		return (last_digit * -1);

	}
	else
	{
		_putchar(last_digit + '0');
		return (last_digit);
	}
}
