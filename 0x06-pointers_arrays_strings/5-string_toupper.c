#include "main.h"
/**
  * string_toupper - convert lower cases to upper
  * @s: string
  * Return: pointer
  */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) >= 97 && *(s + i) < 123)
		{
			*(s + i) = *(s + i) - 32;
		}
	}
	return (s);
}

