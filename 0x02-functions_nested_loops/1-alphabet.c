#include "main.h"

/**
 * print_alphabet - Prints lower case letters
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int lower_case;

	for (lower_case = 97; lower_case < 123; lower_case++)
	{
		_putchar(lower_case);
	}
	_putchar('\n');
}
