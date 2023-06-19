#include "main.h"
/**
  * _islower - check if lower case or not
  *
  * @ch: is a character to be entered
  * Return: 1 for lower case otherwise 0 for any other case
  */
int _islower(int ch)
{
	if (ch >= 97 && ch <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
