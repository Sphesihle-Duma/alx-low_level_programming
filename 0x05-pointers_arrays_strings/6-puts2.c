#include "main.h"
/**
  * puts2 - prints half of the characters
  * @str: a string
  * Return: prints characters at even placed
  * in string
  */
void puts2(char *str)
{
	int character;

	character = 0;
	while (character >= 0)
	{
		if (str[character] != '\0' && character % 2 == 0)
		{
			_putchar(str[character]);
		}
		else if (str[character] == '\0')
		{
			break;
		}
		character++;
	}
	_putchar('\n');
}
