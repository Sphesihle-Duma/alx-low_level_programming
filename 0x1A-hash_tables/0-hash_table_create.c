#include "hash_tables.h"
/**
 * hash_table_create- creates a hash table
 * @size: size of the array
 * Return: a pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;
	hash_node_t **array;
	unsigned long int i;

	if (size == 0)
		return (NULL);
	new_hash_table = malloc(sizeof(hash_table_t));
	if (!new_hash_table)
		return (NULL);
	array = malloc(size * sizeof(hash_node_t *));
	if (!array)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = NULL;
	new_hash_table->size = size;
	new_hash_table->array = array;
	return (new_hash_table);
}
