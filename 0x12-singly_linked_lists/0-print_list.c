#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * print_list - prints strings and their lengths
  * @h: pointer to a list
  * Return: number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t num_of_nodes = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		num_of_nodes++;
		h = h->next;
	}
	return (num_of_nodes);
}
