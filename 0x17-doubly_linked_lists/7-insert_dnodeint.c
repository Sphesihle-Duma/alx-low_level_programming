#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at idx
 * @h: pointer to pointer
 * @idx: index of the node
 * @n: integer
 * Return: a node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *previous, *new_node;
	unsigned int i = 1;

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (*h)
	{
		while (current->prev)
			current = current->prev;
		*h = current;
		while (current)
		{
			if (i == idx)
			{
				if (current->next == NULL)
					return (add_dnodeint_end(h, n))
				new_node = malloc(sizeof(dlistint_t));
				if (!new_node)
					return (NULL);
				previous = current->prev;
				new_node->prev = previous;
				new_node->next = current;
				new_node->n = n;
				previous->next = new_node;
				return (new_node);
			}
			i++;
			current = current->next;
		}
		if (idx == i)
			return (add_dnodeint_end(h, n));
	}
	return (NULL);
}

