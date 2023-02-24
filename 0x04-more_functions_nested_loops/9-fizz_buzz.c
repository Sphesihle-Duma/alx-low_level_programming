#include <stdio.h>
/**
  * main - prints numbers betwen 1 and 100
  *
  * Return: prints number if not a multiple of 3 and 5 otherwise
  * Fizz for multiple of 3 and Buzz for multiple of 5
  */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else
			printf(" %d", i);

	}
	printf("\n");
	return (0);
}
