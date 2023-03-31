#include "lists.h"
#include <stdio.h>
/**
  * print_list - prints strings and their lengths
  * @h: pointer to a list
  * Return: number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t num_of_nodes = 0;

	if (!h)
		return (0);
	while (h)
	{
		if (!h->str)
			printf("[%d] (nil)\n", 0);
		else if (h->len)
			printf("[%u] %s\n", h->len, h->str);
		num_of_nodes++;
		h = h->next;
	}
	return (num_of_nodes);
}
