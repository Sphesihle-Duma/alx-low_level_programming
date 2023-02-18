#include <stdio.h>
#include <string.h>
/**
  * main - Entry point
  *
  * Return: Always (Success)
  */
int main(void)
{
	int lower_case;

	for (lower_case = 97; lower_case <= 122; lower_case++)
	{
		if (lower_case != 101 && lower_case != 113)
			putchar(lower_case);
	}
	putchar('\n');
	return (0);
}
