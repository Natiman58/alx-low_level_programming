#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node at index
 * @head: pointer to the head of the list
 * @index: index of the node to be returned
 * Return: the index node if not NULL
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i = 0;

	while (head != NULL)
	{
		if (i == index)
			break;
		i++;
		head = head->next;
	}
	return (head);
}
