#include "lists.h"
/** */
void free_list(list_t *head)
{
	list_t *next_nodes;

	next_nodes = head->next;
	free(head);
	head = next_nodes;
}
