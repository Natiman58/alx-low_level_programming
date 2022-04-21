#include "lists.h"
/**
 * add_node_end - adds node to the end of linked list
 * @head: pointer to the first node
 * @str: the string to be added
 * Return: Return: the address of the new element
 * or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	newNode = malloc(sizeof(list_t));

	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = NULL;

	if (*head == NULL)
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
