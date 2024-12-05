#include "lists.h"
/**
 * free_dlistint - Entry
 * @head: tete
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nodes;

	while (head != NULL)
	{
		nodes = head;
		head = head->next;
		free(nodes);
	}
}
