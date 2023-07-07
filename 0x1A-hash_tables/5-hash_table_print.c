#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;

	if (!ht)
		printf("{}");
	else
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			tmp = ht->array[i];
			while (tmp)
			{
				printf("\'%s\' : \'%s\'\n", tmp->key, tmp->value);
				if (tmp->next != NULL && i < (ht->size - 1))
					printf(", ");
				tmp = tmp->next;
			}
		}
		printf("}\n");
	}
}
