#include "main.h"
/**
  * _memcpy - copies memory array
  * Description: The _memcpy() function copies n bytes
  * from memory area src to memory area dest
  * Returns a pointer to dest
  * @src: source
  * @dest: destination
  * @n: number of byte
  * Return: pointer
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int j = 0;

	for (i = 1; i <= n; i++)
	{
		*(dest + j) = *(src + j);
		j++;
	}
	return (dest);
}
