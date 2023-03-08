#include "main.h"
/**
  * _puts_recursion - prints a string to the stdout
  * @s: string
  * Return: Nothing
  */
void _puts_recursion(char *s)
{
	int j = 0;

	if (*(s + j) == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*(s + j));
		j++;
		s = (s + j);
		_puts_recursion(s);
	}
}
