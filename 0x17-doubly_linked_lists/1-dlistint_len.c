#include "lists.h"
/**
* dlistint_len - calculates the number of elements in a doublylinked list
* @h: pointer to the first element of the dlinked list
* Return: number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t num_nodes = 0;

	if (!h)
		return (0);
	while (h)
	{
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
