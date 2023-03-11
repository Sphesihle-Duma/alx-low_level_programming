#include <stdio.h>
#include <stdlib.h>
/**
  * main - Entry point
  * @argc: number of args
  * @argv: arrays of pointers
  * Return: Always 0 (Success)
  */
int main(int argc, char *argv[])
{
	int mul = 1;
	int count;

	if (argc < 3)
	{
		printf("Error\n");
		exit(0);
	}
	for (count = 1; count < argc; count++)
	{
		mul *= atoi(argv[count]);

	}
	printf("%d\n", mul);
	return (0);
}
