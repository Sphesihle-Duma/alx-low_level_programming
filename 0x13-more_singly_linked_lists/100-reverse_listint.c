#include "lists.h"
#include <stdlib.h>
/**
  * reverse_listint - reverses the list
  * @head: pointer that points to the pointer which points to the
  * address of the first node
  * Return: pointer of the last node
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nxt, *prev = NULL;

	if (*head == NULL)
		return (NULL);
	while (*head)
	{
		nxt = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = nxt;
	}
	*head = prev;
	return (*head);
}
