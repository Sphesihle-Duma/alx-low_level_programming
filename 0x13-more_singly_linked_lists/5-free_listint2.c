#include "lists.h"
#include <stdlib.h>
/**
  * free_listint2 - clears the memory that was previously
  * allocated for list
  * @head: pointer that points to the pointer that points the first
  * node
  * Return: Nothing
  */
void free_listint2(listint_t **head)
{
	listint_t *temp1, *temp2;

	if (head)
	{
		temp1 = *head;
		while (temp1)
		{
			temp2 = temp1;
			temp1 = temp1->next;
			free(temp2);
		}
		*head = NULL;
	}
}
