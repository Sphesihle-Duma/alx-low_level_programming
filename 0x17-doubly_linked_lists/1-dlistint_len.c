#include "lists.h"
/**
 * dlistint_len - calculates the number of nodes
 * @h: doubly linked list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (!h)
		return (count);
	while (h->prev)
		h = h->prev;
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

