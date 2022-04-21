#include "lists.h"
/**
 * add_node - adds a node at the beggining of a list
 * @head:double pointer to the list_t(first node)
 * @str: new string to add in the node
 * Return: the address of the new element
 * or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int len = 0;

	while (str[len])
		len++;

	newNode = malloc(sizeof(list_t));

	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = *head;
	*head = newNode;

	return (*head);

}
