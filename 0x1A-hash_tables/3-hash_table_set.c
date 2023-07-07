#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add element into
 * @key: key to hash
 * @value: string associated with a key
 * Return: 1 on Success or 0 no fail
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int hash_table_setted = 0;
	unsigned long int key_idx, size;
	hash_node_t *element;

	if (!ht)
		return (hash_table_setted);
	if (!key)
		return (hash_table_setted);
	size = ht->size;
	key_idx = key_index((const unsigned char*)key, size);
	element = malloc(sizeof(hash_node_t));
	if (!element)
		return (hash_table_setted);
	element->key = (char*)key;
	element->value = (char*)value;
	if (!(ht->array[key_idx]))
	{
		element->next = NULL;
		ht->array[key_idx] = element;
	}
	element->next = ht->array[key_idx];
	hash_table_setted = 1;
	return (hash_table_setted);




}
