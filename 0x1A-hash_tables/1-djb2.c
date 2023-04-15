#include "hash_tables.h"

/**
  * hash_djb2 - A function which when passed the key to the hash table.
  * @str: The key to set and get in the hash table.
  * Return: index in our hash table.
  */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
