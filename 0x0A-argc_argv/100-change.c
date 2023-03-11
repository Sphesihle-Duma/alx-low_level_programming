#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of args
 * @argv: array of pointers
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int cents[] = {25, 10, 5, 2, 1};
	int count = 0;
	unsigned long int i;
	int remaining_amount;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	remaining_amount = atoi(argv[1]);
	if (remaining_amount < 0)
	{
		printf("%d\n", 0);
		exit(0);
	}
	else
	{
		for (i = 0; i < sizeof(cents) / sizeof(cents[0]); i++)
		{
			while (remaining_amount >= cents[i])
			{
				count++;
				remaining_amount -= cents[i];
			}
		}
	}
	printf("%d\n", count);
	return (0);
}

