#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * free_listint - frees the list
  * @head: list
  * Return: nothing
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

		while (head)
		{
			temp = head;
			head = head->next;
			free(temp);
		}
}
