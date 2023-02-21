#include "main.h"
/**
  * main - Entry point
  * Description: printing _putchar
  * Return: Always 0 (Success)
  */
int main(void)
{
	char characters[8] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
	{
		_putchar(characters[ch]);
	}
	_putchar('\n');
	return (0);
}
