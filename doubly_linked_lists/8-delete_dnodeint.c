#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at
 * index index of a dlistint_t linked list.
 * @head: take 'head' as the head
 * @index: take 'index' as index
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		(*head) = (*head)->next;
		if ((*head) != NULL)
		{
			(*head)->prev = NULL;
		}
		free(tmp);
		return (1);
	}
	while (tmp != NULL && i < index)
	{
		tmp = tmp->next;
		i++;
	}

	if (tmp == NULL)
	{
		return (-1);
	}

	if (tmp->prev != NULL)
	{
		tmp->prev->next = tmp->next;
	}
	else if (tmp->next != NULL)
	{
		tmp->next->prev = tmp->prev;
	}
	free(tmp);
	return (1);
}

