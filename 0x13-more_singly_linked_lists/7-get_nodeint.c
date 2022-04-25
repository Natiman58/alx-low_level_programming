#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @index: index of the node to be printed
 * @head: pointer to the first node of the list
 * Return: NULL if the node doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
