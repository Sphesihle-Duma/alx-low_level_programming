#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
  * add_node - insert an element in front of the first element
  * @head: pointer to the first element
  * @str: str
  * Return: a pointer
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));

	if (!newnode)
		return (NULL);
	newnode->str = strdup(str);
	if (!newnode->str)
	{
		free(newnode);
		return (NULL);
	}
	if (!head)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = *head;
	*head = newnode;
	return (*head);

}
