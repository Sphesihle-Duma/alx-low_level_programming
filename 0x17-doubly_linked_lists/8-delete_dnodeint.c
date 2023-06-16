#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node
 * @head: pointer to pointer
 * @index: index of a node to delete
 * Return: 1 on Successs otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *backward = *head;
	dlistint_t *forward, *next, *previous;
	unsigned int i = 0;

	if (*head)
	{
		while (backward->prev)
			backward = backward->prev;
		*head = backward;
		while (backward)
		{
			forward = backward;
			if (index == 0 && i == 0)
			{
				*head = forward->next;
				(*head)->prev = NULL;
				free(backward);
				return (1);
			}
			else if (index == i)
			{
				if(forward->next == NULL)
				{
					forward = forward->prev;
					forward->next = NULL;
				}
				else
				{
					previous = forward->prev;
					next = forward->next;
					previous->next = next;
					next->prev = previous;
				}
				free(backward);
				return (1);
			}
			backward = forward->next;
		}
	}
	return (-1);
}
