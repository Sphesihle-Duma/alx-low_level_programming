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
	unsigned long int index;
	hash_node_t *new_element, *tmp;

	if ((!key || strlen(key) == 0) || !ht)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new_element = malloc(sizeof(hash_node_t));
	if (!new_element)
		return (0);
	new_element->key = strdup(key);
	new_element->value = strdup(value);
	if (!new_element->key || !new_element->value)
		return (0);
	tmp = ht->array[index];
	if (!tmp)
	{
		new_element->next = NULL;
		tmp = new_element;
		return (1);
	}
	while (tmp)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (tmp->value == NULL)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}
	new_element->next = ht->array[index];
	ht->array[index] = new_element;
	return (1);

}
