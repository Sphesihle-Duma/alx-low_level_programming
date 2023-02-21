#include "main.h"
/**
  * print_alphabet_x10 - Prints lower case letters x10
  *
  * Return: Always 0 (Success)
  */
void print_alphabet_x10(void)
{
	int i;
	int lower_case;

	for (i = 1; i <= 10; i++)
	{
		for (lower_case = 97; lower_case <= 122; lower_case++)
		{
			_putchar(lower_case);
		}
		_putchar('\n');
	}
}
