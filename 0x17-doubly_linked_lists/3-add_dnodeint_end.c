#include "lists.h"

/**
 *
 *
 *
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = malloc(sizeof(dlistint_t));
	dlistint_t *tp;

	if (current == NULL)
		return (NULL);
	current->next = NULL;
	current->prev = NULL;
	current ->n = n;
        if (*head == NULL)
        {
                *head = current;
		return (*head);
        }
	tp = *head;
	while (tp->next != NULL)
		tp = tp->next;
	current->prev = tp;
	tp->next = current;
	return (*head);
}
