#include "lists.h"
/**
 * sum_dlistint - Entry
 * @head: tete
 * @Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
