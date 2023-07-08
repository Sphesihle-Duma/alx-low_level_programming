#include "hash_tables.h"
/**
 * hash_table_delete - delete a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp, *next;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while ((next = temp) != NULL)
		{
			temp = temp->next;
			free(next->key);
			free(next->value);
			free(next);
			
		}
	}
	free(ht->array);
	free(ht);
}
