#include "hash_tables.h"

/**
 * key_index - this function returns the normalized index for a key.
 * @key: key to get and set in the hash table.
 * @size: size of our hash table
 * Return: index that is normalized.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2((unsigned char *)key);
	return (index % size);
}
