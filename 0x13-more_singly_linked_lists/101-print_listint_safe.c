#include "lists.h"
/**
 * print_listint_safe - prints a linked list safely
 * @head: pointer to the the first node of the linked list
 * Return: the number of nodes in the list
 * if fail; exit status of 98.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	long int diff;

	while (head)
	{
		diff = head - head->next;
		num++;

		printf("[%p] %d\n", (void *)head, head->n);

		if (diff > 0)
			head = head->next;
		else
		{
			printf("->[%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (num);
}
