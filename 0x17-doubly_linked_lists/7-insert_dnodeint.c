#include "lists.h"
/**
 * d_len - returns the number of elements in
 * a double linked list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t d_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
/**
 * insert_dnodeint_at_index - inserts a node at idx
 * @h: pointer to pointer
 * @idx: index of the node
 * @n: integer
 * Return: a node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int length, i = 0;

	if (!h)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	while ((*h)->prev)
		*h = (*h)->prev;
	temp = *h;
	length = d_len(*h);
	while (temp && i < length)
	{
		if (idx == 0)
			add_dnodeint(h, n);
		if (i == idx)
		{
			new_node->next = temp;
			new_node->prev = temp->prev;
			new_node->n = n;
			temp->prev = new_node;
			new_node->prev->next = new_node;
			return (new_node);
		}
		i++;
		temp = temp->next;
	}
	if (idx == length)
		add_dnodeint_end(h, n);
	return (NULL);
}

