#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * add_nodeint_end - adds a node at the end
  * @head: pointer to pointer
  * @n: integer for the newly created node
  * Return: address of the node
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *newnode;

	if (!head)
		return (NULL);
	temp = *head;
	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
	}
	else
	{
		while (temp->next)
			temp = temp->next;
	}
	temp->next = newnode;
	return (newnode);
}
