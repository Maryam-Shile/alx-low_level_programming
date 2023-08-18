#include "lists.h"

/**
 * free_dlistint - frees nodes
 * @head: head node
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *tp;

	current = head;
	while (current != NULL)
	{
		tp = current;
		current = current->next;
		free(tp);
	}
}
