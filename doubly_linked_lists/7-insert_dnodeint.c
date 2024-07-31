#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: take 'h' as head of the list
 * @idx: take 'idx' as parameter
 * @n: take 'n' as parameter
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	unsigned int i = 0;

	if (h == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if ((*h) != NULL)
		{
			(*h)->prev = new;
		}
		(*h) = new;
		return (new);
	}
	current = *h;
	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}
	new->next = current->next;
	new->prev = current;
	if (current->next != NULL)
	{
		current->next->prev = new;
	}
	current->next = new;
	return (new);
}
