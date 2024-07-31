#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a dlistint_t linked list
 * @head: take 'head' as the head
 * Return: if the list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *h = head;
	int sum = 0;

	while (h != NULL)
	{
		sum = sum + h->n;
		h = h->next;
	}

	return (sum);
}
