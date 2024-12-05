#include "lists.h"
/**
 * insert_dnodeint_at_index - Entry
 *
 * @h: tete
 * @idx: idx pour parcourir
 * @n: flemme
 * @Return: new_node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tempo;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	for (i = 0; i && tempo < idx - 1; i++)
		tempo = tempo->next;

	if (tempo == NULL)
	{
		return (NULL);
	}
	new_node->next = tempo->next;
	new_node->prev = tempo;
	if (tempo->next)
		tempo->next->prev = new_node;

	tempo->next = new_node;
	return (new_node);
}
