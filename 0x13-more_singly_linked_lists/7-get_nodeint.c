#include "lists.h"
#include <stdlib.h>
/**
  * get_nodeint_at_index - traverses the list and return a node at a
  * specified position
  * @head: pointer to the first node
  * @index: postion of the node in the list
  * Return: pointer to the node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i, num_of_nodes = 0;
	listint_t *temp, *final;

	temp = head;
	while (temp)
	{
		num_of_nodes++;
	}
	final = head;
	for (i = 0; (i < num_of_nodes) && final ; i++)
	{
		if (i == index)
		{
			return (final);
		}
		final = final->next;

	}
	return (NULL);

}
