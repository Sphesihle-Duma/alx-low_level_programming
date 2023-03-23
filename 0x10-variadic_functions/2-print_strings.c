#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  * print_strings - prints strings
  * @separator: string
  * @n: number of strings
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	va_start(ap, n);
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			str = va_arg(ap, char *);
			if (str)
				printf("%s", str);
			else
				printf("(nil)");
			if (separator && i < (n - 1))
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
