#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;
	bool comma = false;

	if (!ht)
		printf("{}\n");
	else
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			tmp = ht->array[i];
			while (tmp)
			{
				if (comma)
					printf(", ");
				printf("\'%s\' : \'%s\'", tmp->key, tmp->value);
				comma = true;
				tmp = tmp->next;
			}
		}
		printf("}\n");
	}
}
