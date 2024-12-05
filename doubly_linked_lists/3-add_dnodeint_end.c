#include "lists.h"
/**
 * add_dnodeint_end - Entry
 *
 * @head: tete
 * @n: const int
 * @Return: new_node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tempo;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	tempo = *head;
	while (tempo->next != NULL)
	{
		tempo = tempo->next;
	}

	tempo->next = new_node;
	new_node->prev = tempo;

	return (new_node);
}
