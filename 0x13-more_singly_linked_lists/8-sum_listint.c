#include "lists.h"
#include <stdlib.h>
/**
  * sum_listint - calculates the sum of integers in a list of
  * nodes.
  * @head: list
  * Return: sum
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
