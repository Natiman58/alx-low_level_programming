#include"main.h"
#include<stdlib.h>
/**
 * _realloc-reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with calloc
 * @old_size:is the size in bytes of the old allocated memory
 * @new_size:is the size of the new memory block
 * Return: pointer to the new memoory block or NULL if not
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	ptr1 = malloc(new_size);

	if (!ptr)
		return (NULL);
	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptr1[i] = old_ptr[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr1[i] = old_ptr[i];
	}
	free(ptr);
	return (ptr1);
}
