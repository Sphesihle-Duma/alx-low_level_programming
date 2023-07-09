#include "lists.h"
/**
 * add_dnodeint - adds a node
 * @head: pointer to pointer
 * @n: integer
 * Return: added node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *h = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}
	while (h->prev)
		h = h->prev;
	h->prev = new_node;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
	return (new_node);
}
