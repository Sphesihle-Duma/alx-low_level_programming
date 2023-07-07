#include "hash_tables.h"
/**
 * hash_table_create- creates a hash table
 * @size: size of the array
 * Return: a pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;

	if (size == 0)
		return (NULL);
	new_hash_table = malloc(size * sizeof(hash_table_t));

	if (!new_hash_table)
		return (NULL);
	return (new_hash_table);
}
