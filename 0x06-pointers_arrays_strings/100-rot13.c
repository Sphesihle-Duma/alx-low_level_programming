#include "main.h"
/**
  * rot13 - encodes a string
  * Description: a function that encodes a string using rot13.
  * @s: string
  * Return: a pointer
  */
char *rot13(char *s)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char desired_rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (*(s + i) == letters[j])
			{
				*(s + i) = desired_rot13[j];
				break;
			}
		}
	}
	return (s);
}
