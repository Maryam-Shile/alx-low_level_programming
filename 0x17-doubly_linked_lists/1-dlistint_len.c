#include "lists.h"

/**
 * dlistint_len - returns length of the list
 * @h: head of the list
 * Return: returns length of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
