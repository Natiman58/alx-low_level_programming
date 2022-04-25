#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: the head pointer of the list to be freed.
 * Return: none
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
