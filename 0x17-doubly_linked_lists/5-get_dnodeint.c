#include "lists.h"
/**
 * get_dnodeint_at_index - searches for a node
 * @head: doubly linked list
 * @index: index of a node to search for
 * Return: node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *backward = head;
	dlistint_t *forward;
	unsigned int i = 0;

	if (head)
	{
		while (backward->prev)
			backward = backward->prev;
		forward = backward;
		while (forward)
		{
			if (i == index)
				return (forward);
			i++;
			forward = forward->next;
		}
	}
	return (NULL);
}
