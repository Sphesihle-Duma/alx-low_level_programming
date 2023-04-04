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
	int num_of_nodes = 0;
	listint_t *temp, *delete;

	if (!head || *head == NULL)
		return (0);
	temp = *head;
	while (temp)
	{
		num_of_nodes++;
		temp = temp->next;
	}
	delete = *head;
	if (delete)
	{
		*head = delete->next;
		free(delete);
		num_of_nodes--;
	}
	return (num_of_nodes);

}
