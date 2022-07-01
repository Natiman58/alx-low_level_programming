#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table of size @size
 * @size: size of the array of the hash table
 * Return: pointer to the newly creted hash table
 * if fail, NULL is returned
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr = NULL;

	if (size == 0 || !size)
		return (NULL);

	ptr = malloc(sizeof(hash_table_t));

	if (ptr == NULL)
		return (NULL);


	ptr->size = size;
	ptr->array = calloc(size, sizeof(hash_node_t *));

	if (ptr->array == NULL)
	{
		free(ptr);
		return (NULL);
	}

	return (ptr);
}
