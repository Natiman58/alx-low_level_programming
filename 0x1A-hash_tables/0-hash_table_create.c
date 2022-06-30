#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table of size @size
 * @size: size of the array of the hash table
 * Return: pointer to the newly creted hash table
 * if fail, NULL is returned
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(hash_table_t));

	if (!ptr)
		return (NULL);

	ptr->array = malloc(sizeof(hash_node_t *) * size);

	if (ptr->array == NULL)
	{
		return (NULL);
	}
	ptr->size = size;

	for (i = 0; i < size; i++)
		ptr->array[i] = NULL;
	return (ptr);
}
