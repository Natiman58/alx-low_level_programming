#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at index
 * @idx: the index where the new node should be added
 * @n: the number to be added
 * @h: pointer to the first node
 * Return: address of the new node, if not NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int counter = 1;
	dlistint_t *temp = NULL, *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL || h == NULL)
		return (NULL);
	new_node->n = n;
	temp = *h;

	if (idx == 0)
	{
		*h = new_node;
		new_node->next = temp;
		new_node->prev = NULL;
		temp->prev = new_node;
		return (new_node);
	}
	while (temp->next != NULL)
	{
		if (counter == idx)
		{
			new_node->prev = temp;
			new_node->next = temp->next;
			temp->next = new_node;
			new_node->next->prev = new_node;
		}
		temp = temp->next;
		counter++;
	}
	if (counter == idx)
	{
		new_node->prev = temp;
		new_node->next = NULL;
		temp->next = new_node;
	}
	if (counter < idx)
	{	free(new_node);
		return (NULL);
	}
	return (new_node);
}
