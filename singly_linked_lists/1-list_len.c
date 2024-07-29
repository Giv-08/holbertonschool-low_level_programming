#include <stdio.h>
#include "lists.h"

/**
 * list_len - prints returns the number of
 * elements of a list_t list
 * @h: take 'h' as the head
 * Return: number of the nodes
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
