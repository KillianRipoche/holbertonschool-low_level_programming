#include "lists.h"
/**
 * add_node - Entry
 *
 * @head: Head of the nodes
 * @str: string
 * @return: new_node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	unsigned int len = 0;

	if (head == NULL || new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	while (str[len])
		len++;

	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
