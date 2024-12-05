#include "lists.h"
/**
 * free_list - Entry
 *
 * @head: head of the node
 */
void free_list(list_t *head)
{
	list_t *next_nodes;

	while (head != NULL)
	{
		next_nodes = head->next;
		free(head->str);
		free(head);
		head = next_nodes;
	}
}
