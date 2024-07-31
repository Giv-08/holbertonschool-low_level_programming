#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a linked dlistint_t list
 * @h: take 'h' as the head
 * Return: number of the nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);

}
