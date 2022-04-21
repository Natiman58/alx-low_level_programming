#include "lists.h"
/**
 * list_len - returns the number of elements in a liked list
 * @h: pointer to list_len
 * Return: number of elements in a liked list
 */
size_t list_len(const list_t *h)
{
	size_t num_elements = 0;

	while (h)
	{
		num_elements++;
		h = h->next;
	}
	return (num_elements);
}
