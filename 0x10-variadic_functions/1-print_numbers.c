#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  * print_numbers - prints numbers followed by a string
  * @separator: string
  * @n: number of integers
  * Return: Nothing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	if (separator && n)
	{
		for (i = 0; i < n; i++)
		{
			if (i != (n - 1))
				printf("%d%s", va_arg(ap, int), separator);
			else
				printf("%d", va_arg(ap, int));
		}
		printf("\n");
	}
	va_end(ap);
}
