#include "hash_tables.h"
/**
 * key_index - calculate the index of the key
 * @key: key
 * @size: size of array
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, tmp;

	if (key)
		tmp = hash_djb2(key);
	if (tmp <= size)
		index = tmp;
	return (index);
}
