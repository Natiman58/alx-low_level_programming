#include "lists.h"
/**
 * free_dlistint - frees a doublylinked list
 * @head: pointer to the first node of the linked list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
