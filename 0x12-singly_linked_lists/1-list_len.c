#include "lists.h"
/**
  * list_len - return number of elements
  * @h: pointer to a list
  * Return: number of element
  */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);
	while (h != NULL)
	{
		count++
		h = h->next;
	}
	return (count);
}
