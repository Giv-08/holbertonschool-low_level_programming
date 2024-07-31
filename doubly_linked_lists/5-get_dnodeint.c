#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - returns the nth node
 * of a dlistint_t linked list
 * @head: take 'head' as head of the list
 * @index: take 'index' as parameter
 * Return: NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (i == index)
		{
			return (current);
		}
		current = current->next;
		i++;
	}

	return (NULL);
}
