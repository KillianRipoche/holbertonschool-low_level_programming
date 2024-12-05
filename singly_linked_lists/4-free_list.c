#include "lists.h"
/** */
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
