#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  * main - Entry point
  * @argc: number of args
  * @argv: array of pointers
  * Return: Always 0 on (Success)
  */
int main(int argc, char *argv[])
{
	int sum = 0;
	int count;
	int sec;

	if (argc == 1)
	{
		printf("%d\n", 0);
		exit(0);
	}
	for (count = 1; count < argc; count++)
	{
		for (sec = 0; *(*(argv + count) + sec) != '\0'; sec++)
		{
			if (isdigit(*(*(argv + count) + sec)) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[count]);
	}
	if (sum > 0)
		printf("%d\n", sum);
	return (0);
}
