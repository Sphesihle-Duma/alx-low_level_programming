#include "main.h"
#include <stdlib.h>
/**
  * print_error - prints error and exit
  * @s: error message
  * Return: Nothing
  */
void print_error(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		_putchar(s[i]);
	_putchar('\n');
	exit(98);
}
/**
  * print_int - prints an integer
  * @num: integer
  * Return: Nothing
  */
void print_int(int num)
{
	int temp, i, power = 1, count = 0;

	if (num < 0)
	{
		_putchar('-');
		num *= -1;
	}
	if (num == 0)
	{
		_putchar(48);
	}
	temp = num;
	while (temp > 0)
	{
		count++;
		temp /= 10;
	}
	for (i = 1; i < count; i++)
		power *= 10;
	while (num > 0)
	{
		_putchar(num / power + 48);
		num -= (num / power) * power;
		power /= 10;
	}
}
/**
  * _atoi - converts a string to an integer
  * @s: string
  * Return: integer
  */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign = -1;
		}
		else
		{
			result = (result * 10) + (*s - 48);
		}
		s++;
	}
	return (result * sign);
}
/**
  * main - Entry point
  * @argc: number of strings
  * @argv: array of strings
  * Return: always 0 on (Success)
  */
int main(int argc, char *argv[])
{
	int i, j, converted, mul = 1;
	char err[] = "Error";

	if (argc != 3)
		print_error(err);
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
				print_error(err);
		}
		converted = _atoi(argv[i]);
		mul *= converted;
	}
	print_int(mul);
	_putchar('\n');
	return (0);
}
