#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints elements in lists
 * @h: pointer to the first node
 * Return: returns zero
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (count);
	}
	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
