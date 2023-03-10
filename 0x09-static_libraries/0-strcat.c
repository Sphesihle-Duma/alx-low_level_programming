#include "main.h"
/**
  * _strcat - appends the second string
  * to the first string
  * Description: This function appends the src string to the dest string,
  * overwriting the terminating null byte (\0) at the end of
  * dest, and then adds a terminating null byte
  * Returns a pointer to the resulting string dest
  * @src: source
  * @dest: destination
  * Return: *dest
  */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}

	for (j = 0; *(src + j) != '\0'; j++)
	{
		*(dest + i) = *(src + j);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
