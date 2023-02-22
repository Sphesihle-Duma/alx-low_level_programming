#include <stdio.h>
/**
  * main - prints and computes sum of the multiples
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int k, sum;

	sum = 0;
	for (k = 3; k < 1024; k++)
	{
		if (k % 3 == 0 || k % 5 == 0)
		{
			sum = sum + k;
		}
	}
	printf("%d\n", sum);
	return (0);
}
