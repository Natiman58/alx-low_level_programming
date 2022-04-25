#include "lists.h"
/**
 * add_nodeint - addes a new node at the beginning of the list
 * @head: double pointer(another pointer to the head pointer(*head))
 * @n: data to insert in the new node
 * Return: new node at the beginning of the list
 * if not NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
