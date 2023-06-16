#include "lists.h"
/**
 * free_dlistint - frees the doubly list
 * @head: doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *backward = head;
	dlistint_t *forward;

	if (head)
	{
		while (backward->prev)
			backward = backward->prev;
		while (backward)
		{
			forward = backward->next;
			free(backward);
			backward = forward;
		}
	}
}
