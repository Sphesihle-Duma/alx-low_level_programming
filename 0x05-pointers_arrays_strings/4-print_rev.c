#include "main.h"
/**
  * print_rev - prints a string in reverse
  *
  * Description: a function that prints a string, in reverse
  * , followed by a new line.
  * @s: string
  * Return: prints a string
  */
void print_rev(char *s)
{
	int num_of_chars;

	num_of_chars = 0;
	while (*(s + num_of_chars) != '\0')
	{
		num_of_chars++;
	}
	for (num_of_chars--; num_of_chars >= 0; num_of_chars--)
	{
		_putchar(*(s + num_of_chars));
	}
	_putchar('\n');
}
