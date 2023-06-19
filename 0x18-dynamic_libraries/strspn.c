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
	unsigned int count;
	unsigned int j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		count = 1;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*(s + i) == accept[j])
			{
				count = 0;
				break;
			}
		}
		if (count == 1)
			break;
	}
	return (i);

}
