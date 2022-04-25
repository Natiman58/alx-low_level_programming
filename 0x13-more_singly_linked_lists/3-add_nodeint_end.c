#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end
 * @head: pointer to the head pointer
 * @n: data type to be inserted in the new node
 * Return:the address of the new element,
 * or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *temp = *head;

	newNode = malloc(sizeof(listint_t));

	if(newNode == NULL)
		return (NULL);
	
	newNode->n = n;
	newNode->next = NULL;

	if(*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newNode;
	return (newNode);
}
