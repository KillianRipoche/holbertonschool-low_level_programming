#include "lists.h"

/**
* delete_dnodeint_at_index - deletes the node
* @head: head of the nodes
* @index: index of the node
* Return: node tempo
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tempo = *head;
	unsigned int i = 0;

	if (!head || !(*head))
		return (-1);

	if (index == 0)
	{
		*head = tempo->next;
		if (*head)
			(*head)->prev = NULL;
		free(tempo);
		return (1);
	}

	while (tempo && i < index)
	{
		tempo = tempo->next;
		i++;
	}

	if (!tempo)
		return (-1);

	if (tempo->next)
		tempo->next->prev = tempo->prev;
	if (tempo->prev)
		tempo->prev->next = tempo->next;

	free(tempo);
	return (1);
}
