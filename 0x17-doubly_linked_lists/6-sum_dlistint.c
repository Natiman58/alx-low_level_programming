#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data in the doubly linked list
 * @head: pointer to the first node of the linked list
 * Return: the sum or 0 if list is empty
 **/

int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;

	if (head == 0)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
