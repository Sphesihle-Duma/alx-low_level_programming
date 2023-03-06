#include "main.h"
/**
  * _strspn - return length of a substring
  * @s: string
  * @accept: substring
  * Return: length of a substring
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int count = 0;
	unsigned int j;

	for (i = 0; *(accept + i) != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (*(accept + i) == s[j])
			{
				count++;
				break;
			}
		}
	}
	return (count);

}
