#include "main.h"
/**
  * _isalpha - checks if a character is alpha
  * @ch: character to be checked
  *
  * Return: 1 is alpha otherwise 0 for any other case
  */
int _isalpha(int ch)
{
	if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
