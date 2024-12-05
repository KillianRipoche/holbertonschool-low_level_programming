#include "lists.h"
/**
 * add_node - Entry
 * @head: Head of the nodes
 * @str: string
 * @Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	unsigned int length = 0;

	if (head == NULL || new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	while (str[length])
		length++;

	new_node->len = length;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
