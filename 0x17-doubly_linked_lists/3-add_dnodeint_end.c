#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the end
 * @head: pointer to pointer
 * @n: integer
 * Return: address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *forward = *head;
	dlistint_t *backward = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->next = NULL;
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}
	while (backward->prev)
		backward = backward->prev;
	while (forward->next)
		forward = forward->next;
	new_node->prev = forward;
	forward->next = new_node;
	*head = backward;
	return (new_node);
}
