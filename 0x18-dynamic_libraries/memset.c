#include "main.h"
/**
  * _memset - fills a memory with a constant byte.
  * Description: The _memset() function fills the first n bytes of the
  * memory area pointed to by s with the constant byte b
  * Returns a pointer to the memory area s
  * @n: number of byte
  * @b: constant byte
  * @s: pointer
  * Return: pointer with n bytes.
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned int j = 0;

	for (i = 1; i <= n; i++)
	{
		*(s + j) = b;
		j++;
	}
	return (s);
}
