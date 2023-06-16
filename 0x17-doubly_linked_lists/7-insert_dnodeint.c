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
	unsigned int i = 0;
	const int new_n = n;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (*h == NULL && idx == i)
		return (add_dnodeint(h, new_n));
	else if (*h)
	{
		while (current->prev)
			current = current->prev;
		*h = current;
		while (current)
		{
			if (i == idx)
			{
				previous = current->prev;
				new_node->prev = previous;
				new_node->next = current;
				previous->next = new_node;
				return (new_node);
			}
			i++;
			current = current->next;
		}
	}
	return (NULL);
}

