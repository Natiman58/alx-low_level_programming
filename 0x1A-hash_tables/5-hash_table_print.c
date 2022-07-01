#include "hash_tables.h"

/**
 * print_list - prints all the elements of a linked list
 * @ptr: pointer to the hash_node_t list to print
 */
void print_list(hash_node_t *ptr)
{
	while (ptr)
	{
		printf("'%s': '%s'", ptr->key, ptr->value);
		if (ptr->next)
			printf(", ");
		ptr = ptr->next;
	}
}


/**
 * hash_table_print - a function that prints the hash table
 * @ht: the table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node = NULL;
	char *last_key = NULL;
	unsigned long int index;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
			node = ht->array[i];
	}

	printf("{");

	if (node)
	{
		last_key = node->key;
		index = key_index((const unsigned char *)last_key, ht->size);
		for (i = 0; i < ht->size; i++)
		{
			print_list(ht->array[i]);
			if (ht->array[i] && i < index)
				printf(", ");
		}
	}
	printf("}\n");

}
