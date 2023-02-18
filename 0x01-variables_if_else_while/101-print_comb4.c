#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int dig1;
	int dig2;
	int dig3;

	dig1 = 48;
	while (dig1 <= 57)
	{
		dig2 = dig1 + 1;
		while (dig2 <= 57)
		{
			dig3 = dig2 + 1;
			while (dig3 <= 57)
			{
				putchar(dig1);
				putchar(dig2);
				putchar(dig3);
				if (dig3 == 57 && dig2 == 56 && dig1 == 55)
				{
					break;
				}
				putchar(',');
				putchar(' ');
				dig3++;
			}
			dig2++;
		}
		dig1++;
	}
	putchar('\n');
	return (0);
}
