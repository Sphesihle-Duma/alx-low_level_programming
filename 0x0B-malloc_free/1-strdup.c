#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
  * _strdup - copies the string
  * @str: string to be copied
  * Return: pointer or NULL
  */
char *_strdup(char *str)
{
	char *ptr;
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
		i++;
	ptr = (char *)malloc(sizeof(char) * (i + 1));
	if (ptr == NULL || str == NULL)
		return (NULL);
	for (i = 0; *(str + i) != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
