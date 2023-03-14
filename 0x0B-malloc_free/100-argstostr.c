#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
  * argstostr - concanates strings
  * @ac: number of string
  * @av: 2D array
  * Return: pointer
  */
char *argstostr(int ac, char **av)
{
	char *p;
	int i, j, k = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
	}
	len++;
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[k] = av[i][j];
			k++;
		}
		p[k] = '\n';
		k++;
	}
	p[k] = '\0';
	return (p);
}
