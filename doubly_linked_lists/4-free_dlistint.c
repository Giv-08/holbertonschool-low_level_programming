#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_dlistint - frees a dlistint_t list
 * @head: take 'head' as argument
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
