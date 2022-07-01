#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: the hash table
 * @key: the key of the value to be passed
 * @value: value associated with the key
 *
 * Return: 1 on success and if not 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *tmp;

	if (!ht || !key || !value || !strcmp(key, ""))
		return (0);
	idx = key_index((unsigned char *)key, ht->size);

	if (ht->array[idx] != NULL)
	{
		if (strcmp(key, ht->array[idx]->key) == 0)
		{
			ht->array[idx]->value = strdup(value);
			return (1);
		}
	}
	if (ht->array[idx] == NULL)
	{
		tmp = malloc(sizeof(hash_node_t *));
		if (tmp == NULL)
			return (0);
		tmp->next = NULL;
		tmp->key = strdup(key);
		tmp->value = strdup(value);
		ht->array[idx] = tmp;
	}
	else
	{
		tmp = malloc(sizeof(hash_node_t *));
		if (tmp == NULL)
			return (0);
		tmp->key = strdup(key);
		tmp->value = strdup(value);
		tmp->next = ht->array[idx];
		ht->array[idx] = tmp;
	}
	return (1);
}

