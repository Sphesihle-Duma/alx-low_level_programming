#include <stdio.h>
/**
  * main - prints first 500 fibonacci numbers
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	long int num1, num2, sum, temp, count;

	num1 = 1;
	num2 = 2;
	count = 2;
	printf("%ld, %ld\n", num1, num2);
	while (count < 50)
	{
		sum = num1 + num2;
		if (count == 49)
		{
			printf("%ld", sum);
		}
		else
		{
			printf("%ld, ", sum);
		}
		temp = num2;
		num2 = sum;
		num1 = temp;
		count++;
	}
	printf("\n");
	return (0);
}
