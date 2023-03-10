#include "main.h"
/**
  * _isdigit - checks if character is digit
  *
  * @c: character to be checked
  * Return: 1 if a character is a digit
  * otherwise 0
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
