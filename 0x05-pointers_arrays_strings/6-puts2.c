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

	for (character = 0; *(str + character) != '\0'; character += 2)
	{
		_putchar(str[character]);
	}
	_putchar('\n');
}
