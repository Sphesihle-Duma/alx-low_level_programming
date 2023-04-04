#include "lists.h"
#include <stdlib.h>
/**
  * pop_listint - deletes the first node
  * @head: pointer that points to the pointer which points at
  * the first node
  * Return: number of nodes after deletion
  */
int pop_listint(listint_t **head)
{
	int num_of_first;
	listint_t *delete;

	if (!head || *head == NULL)
		return (0);
	delete = *head;
	if (delete)
	{
		num_of_first = delete->n;
		*head = delete->next;
		free(delete);
	}
	return (num_of_first);

}
