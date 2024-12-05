#include "lists.h"
/**
 * add_dnodeint - Entry
 *
 * @head: double pointer
 * @n: entier n
 * @Return: new_nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nodes;

	new_nodes = malloc(sizeof(dlistint_t));

	if (new_nodes == NULL)
	{
		free(new_nodes);
		return (NULL);
	}

	new_nodes->n = n;
	new_nodes->prev = NULL;
	new_nodes->next = *head;

	if (*head != NULL)
		(*head)->prev = new_nodes;
		
	*head = new_nodes;

	return (new_nodes);
}
