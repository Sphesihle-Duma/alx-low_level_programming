#include "main.h"
#include <stdio.h>
/**
  * main - Entry point
  * @argc: number of args
  * @argv: array of pointers
  * Return: Always 0 (Successful)
  */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
