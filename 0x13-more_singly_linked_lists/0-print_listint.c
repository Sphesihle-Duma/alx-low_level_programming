#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_listint - prints the elements of list
  * @h: list
  * Return: Nothing
  */
size_t print_listint(const listint_t *h)
{
	size_t num_of_elem = 0;

	if (!h)
		return (0);
	while (h->next)
	{
		printf("%d\n", h->n);
		num_of_elem++;
		h = h->next;
	}
	return (num_of_elem);
}
