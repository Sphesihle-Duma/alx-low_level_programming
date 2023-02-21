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
		_putchar(-number + 48);
		return (-number);

	}
	else
	{
		_putchar(number + 48);
		return (number);
	}
}
