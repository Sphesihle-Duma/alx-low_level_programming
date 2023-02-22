#include "main.h"
/**
  * times_table - Prints the table
  *
  * Return: prints the table
  */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		if (i == 0)
		{
			for (j = 1; j <= 10; j++)
			{
				_putchar(48);
				if (j != 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
		else
		{
			for (k = 0; k <= i * 9; k = k + i)
			{
				if (k >= 10)
				{
					_putchar(k / 10 + 48);
					_putchar(k % 10 + 48);
				}
				else
				{
					_putchar(k + 48);
				}
				if (k != i * 9 && k < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else if (k >= 10 && k != i * 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
