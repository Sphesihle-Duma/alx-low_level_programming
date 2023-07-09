#include "lists.h"
/**
 * sum_dlistint - calculates the sum
 * @head: doubly linked list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *backward = head;
	dlistint_t *forward;

	if (!head)
		return (sum);
	while (backward->prev)
		backward = backward->prev;
	forward = backward;
	while (forward)
	{
		sum += forward->n;
		forward = forward->next;
	}
	return (sum);
}
