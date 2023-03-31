#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - function to calculate the length of a const char string
 * @s: string to work with
 * Return: length of string.
 */
unsigned int _strlen(const char *s)
{
	unsigned int len = 0;

	if (!s)
		return (0);
	while (s[len])
		len++;
	return (len);
}

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
	newnode->len = _strlen(str);
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
