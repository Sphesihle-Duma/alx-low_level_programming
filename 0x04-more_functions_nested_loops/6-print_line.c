#include "main.h"
/**
  * print_line - prints lines
  *
  * @n: number of underscores
  * Return: prints _ n times
  */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
