#include"lists.h"
/**
 * free_list - frees a node
 * @head: pointer to the node
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
