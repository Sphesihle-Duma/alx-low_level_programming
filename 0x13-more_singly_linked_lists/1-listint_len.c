#include "lists.h"
#include <stdio.h>
/**
  * listint_len - calculate the length of the string
  * @h: lists
  * Return: number of nodes
  */
size_t listint_len(const listint_t *h)
{
	size_t num_of_nodes = 0;

	if (!h)
		return (0);
	while (h)
	{
		num_of_nodes++;
		h = h->next;
	}
	return (num_of_nodes);
}
