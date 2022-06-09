#include "lists.h"

/**
* print_dlistint - prints all the elements of doubly linked list forward
* @h: pointer to the first node of the list
*
*Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes = 0;

	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
