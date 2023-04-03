#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * add_nodeint - adds a node to the list
  * @head: double pointer
  * @n: integer to be stored in a new node
  * Return: the address of the node
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (!head)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
