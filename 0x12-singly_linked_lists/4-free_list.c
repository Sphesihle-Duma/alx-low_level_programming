#include "lists.h"
#include <stdlib.h>
void free_list(list_t *head)
{
	list_t *temp1 = head;
	list_t *temp2 = NULL;

	while (temp1)
	{
		temp2 = temp1->next;
		free(temp1->str);
		free(temp1);
		temp1 = temp2;
	}

}
