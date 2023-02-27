#include "main.h"
/**
  * rev_string - reverse a string
  *
  * Description: a function that reverse a string
  * @s: string
  * Return: a string
  */
void rev_string(char *s)
{
	int num_of_chars;
	int temp;
	int rev;

	num_of_chars = 0;
	while (*(s + num_of_chars) != '\0')
	{
		num_of_chars++;
	}
	for (rev = 0; rev < num_of_chars / 2; rev++)
	{
		temp = s[rev];
		s[rev] = s[num_of_chars - 1 - rev];
		s[num_of_chars - 1 - rev] = temp;
	}
}
