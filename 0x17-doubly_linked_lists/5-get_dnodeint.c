#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at index
 * @head: head node
 * @index: index
 * Return: returns head node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i < index)
	{
		i++;
		head = head->next;
	}
	if (head == NULL || i < index)
		return (NULL);
	return (head);
}
