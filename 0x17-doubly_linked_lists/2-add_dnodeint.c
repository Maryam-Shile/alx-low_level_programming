#include "lists.h"

/**
 * add_dnodeint - adds nodes to the beginning
 * @head: head of the node
 * @n: data in the node
 * Return: returns head
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h = malloc(sizeof(dlistint_t));

	if (h == NULL)
		return (NULL);
	h->prev = NULL;
	h->n = n;
	h->next = *head;
	if (*head != NULL)
		(*head)->prev = h;
	*head = h;
	return (*head);
}
