#include "lists.h"

/**
 * print_list - prints all element of list h
 * @h: list h
 * Return: numbe of elements
 */

size_t print_list(const list_t *h)
{
	size_t i;

	if (h == NULL)
	{
		return (0);
	}
	i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
