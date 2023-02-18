#include <stdio.h>
/**
  * mian - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int first_dig;
	int second_dig;

	first_dig = 48;
	while (first_dig <= 57)
	{
		second_dig = first_dig + 1;
		while (second_dig <= 57)
		{
			if (first_dig != second_dig)
			{
				putchar(first_dig);
				putchar(second_dig);
				putchar(',');
				putchar(' ');
			}
			second_dig++;
		}
		first_dig++;
	}
	putchar('\n');
	return (0);
}
