#include "lists.h"
/**
* add_dnodeint - add node in the beginning of a doubly linked list
* @head: pointer to the first element of the doubly linked list
* @n: the position to insert
* Return: the adress of the new element
* or null if fail
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = NULL, *new_node = NULL;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;

	temp = *head;
	*head = new_node;
	new_node->next = temp;

	if (temp != NULL)
		temp->prev = *head;
	return (new_node);
}
