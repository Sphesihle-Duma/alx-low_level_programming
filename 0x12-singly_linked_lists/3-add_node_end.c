#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
  * _strlen - calculate the legth of a string
  * @str: string
  * Return: length of the string
  */
unsigned int _strlen(const char *str)
{
	unsigned int len = 0;

	if (!str)
		return (0);
	while (str[len])
		len++;
	return (len);
}
/**
  * add_node_end - address of the last node
  * @head: pointer that points to the pointer which point to
  * the first node
  * @str: string
  * Return: address of the last node
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *newnode;

	temp = *head;
	if (!head || !str)
		return (NULL);
	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);
	newnode->str = strdup(str);
	if (!newnode->str)
	{
		free(newnode);
		return (NULL);
	}
	newnode->len = _strlen(str);
	newnode->next = NULL;
	if (temp == NULL)
	{
		temp = newnode;
		return (temp);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = newnode;
	return (*head);
}
