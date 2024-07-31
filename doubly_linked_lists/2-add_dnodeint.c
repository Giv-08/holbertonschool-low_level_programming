#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_dnoteint - adds a new node at the
 * beginning of a dlistint_t list
 * @h: take 'h' as the head
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;

	return (new);
}
