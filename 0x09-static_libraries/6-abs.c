#include "main.h"
/**
  * _abs - finds the absolute value of a
  * given number
  * @n: number to be entered
  *
  * Return: Always a positive number
  */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		n = n * -1;
		return (n);
	}
}
