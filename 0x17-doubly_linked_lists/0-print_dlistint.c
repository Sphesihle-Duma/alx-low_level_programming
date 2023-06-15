#include "lists.h"
/**
 * print_dlistint - prints all elements
 * @h: pointer to the doubly linked lists
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h->prev != NULL)
		h = h->prev;
	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
