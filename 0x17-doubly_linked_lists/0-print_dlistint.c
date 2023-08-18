#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_dlistint - prints element of list
 * @h: head of the list
 * Return: returns number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	int t, i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		i++;
		t = h->n;
		h = h->next;
		printf("%d\n", t);
	}
	return (i);
}
