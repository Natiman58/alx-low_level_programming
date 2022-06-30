#include "hash_tables.h"
/**
 * key_index - a function that gives index of a key in the hash table
 * @key: the key of the value
 * @size: size of the array
 *
 * Return: index to store the key/value pair in the hash table
 * in the arry of hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (size == 0)
		return (0);
	hash = hash_djb2(key);

	return (hash % size);
}
