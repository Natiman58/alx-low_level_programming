#include "hash_tables.h"

/**
 * replace_value - replaces the value at the pre-existing key
 * @ht: double pointer to the hash node struct
 * @key: the new key to be added node
 * @value: the new value to be added to the node
 */
void replace_value(hash_node_t **ht, const char *key, const char *value)
{
	hash_node_t *temp = *ht;

	while (temp && strcmp(temp->key, key))
		temp = temp->next;
	free(temp->value);
	temp->value = strdup(value);
}

/**
 * check_key - looks for the key if it exists in the hash table
 * @ht: pointer to the node
 * @key: the key to be looked for
 *
 * Return: 1 on success and 0 on failure
 */
int check_key(hash_node_t *ht, const char *key)
{
	while (ht)
	{
		if (!strcmp(ht->key, key))
			return (1);
	}
	return (0);
}

/**
 * add_node - adds a new node at the beggining of a linked list
 * @head: double pointer to the head of the hash_node singly linked list
 * @key: the new key to add to the node
 * @value: the value to be added in the node
 * Return: pointer to the newly added node.
 * if fails NULL
 */

hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (NULL);
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (*head == NULL)
	{
		(*head) = new_node;
		new_node->next = NULL;
	}
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}

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

	if (!ht || !key || !value || !strcmp(key, ""))
		return (0);
	idx = key_index((unsigned char *)key, ht->size);

	if (check_key(ht->array[idx], key))
	{
		replace_value(&ht->array[idx], key, value);
		return (1);
	}

		add_node(&ht->array[idx], key, value);
			if (&ht->array[idx] == NULL)
			return (0);
	return (1);
}

