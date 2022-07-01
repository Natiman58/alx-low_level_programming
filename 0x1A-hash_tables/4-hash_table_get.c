#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key
 * @ht: the hash table we want to look into
 * @key: the key we are looking for
 * Return: value associated with element
 * or NULL if key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *ptr = NULL;

	if (!ht || !key || !strcmp(key, ""))
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	ptr = (ht->array)[index];

	while (ptr)
	{
		if (!strcmp(ptr->key, (char *)key))
			return (ptr->value);
		ptr = ptr->next;
	}
	return (NULL);
}

