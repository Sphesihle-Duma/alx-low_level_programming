#include "hash_tables.h"
/**
 * key_index - calculate the index of the key
 * @key: key
 * @size: size of array
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (key)
	{
		index = hash_djb2(key);
		index %= size;
	}
	return (index);
}
