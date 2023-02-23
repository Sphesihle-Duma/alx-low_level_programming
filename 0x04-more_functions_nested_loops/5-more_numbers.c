#include "main.h"
/**
  * more_numbers - prints numbers between 0 to 14
  *
  * Return: prints 0 to 14
  */
void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + 48);
				_putchar((j % 10) + 48);
			}
			else
			{
				_putchar(j + 48);
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}
