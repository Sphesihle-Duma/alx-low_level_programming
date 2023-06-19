#include "main.h"
/**
  * _puts - prints a string
  *
  * Description:  a function that prints a string, followed by a new
  * line, to a stdout.
  * @str: a string
  * Return: prints a string
  */
void _puts(char *str)
{
	int number_of_chars;

	number_of_chars = 0;
	while (*(str + number_of_chars) != '\0')
	{
		_putchar(*(str + number_of_chars));
		number_of_chars++;
	}
	_putchar('\n');
}
