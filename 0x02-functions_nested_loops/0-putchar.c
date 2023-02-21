#include "main.h"
#include <stdio.h>
/**
  * main - Entry point
  * Description: printing _putchar
  * Return: Always 0 (Success)
  */
int main(void)
{
	char characters[] = "_putchar";
	int ch;
	int length;

	length = sizeof(characters) / sizeof(ch);
	for (ch = 0; ch < length; ch++)
	{
		_putchar(characters[ch]);
	}
	_putchar('\n');
	return (0);
}
