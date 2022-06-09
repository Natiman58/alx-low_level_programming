#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: pointer to the frist node
 * @index: the index of the node to be deleted
 * Return: 1 on success if not -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *temp = NULL;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(temp);
		return (1);
	}
	while (temp->next != NULL)
	{
		if (counter == index)
		{
			temp->next->prev = temp->prev;
			temp->prev->next = temp->next;
			free(temp);
			return (1);
		}
		temp = temp->next;
		counter++;
	}
	return (-1);
}
