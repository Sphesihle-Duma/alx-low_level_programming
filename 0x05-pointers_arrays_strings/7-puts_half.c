#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: prints half of a string
 */
void puts_half(char *str)
{
	int index = 0, j;

	while (index >= 0)
	{
		if (str[index] == '\0')
			break;
		index++;
	}

	if (index % 2 == 1)
		j = index / 2;
	else
		j = (index - 1) / 2;

	for (j++; j < index; j++)
		_putchar(str[j]);
	_putchar('\n');
}
