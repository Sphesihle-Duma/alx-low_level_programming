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
	int dig4;

	dig1 = 48;
	while (dig1 <= 57)
	{
		dig2 = 48;
		while (dig2 <= 57)
		{
			dig3 = 48;
			while (dig3 <= 57)
			{
				dig4 = dig3 + 1;
				while (dig4 <= 57)
				{
					putchar(dig1);
					putchar(dig2);
					putchar(' ');
					putchar(dig3);
					putchar(dig4);
					putchar(',');
					putchar(' ');
					dig4++;
				}
				dig3++;
			}
			dig2++;
		}
		dig1++;
	}
	putchar('\n');
	return (0);
}
