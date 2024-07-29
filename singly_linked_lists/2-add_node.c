#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - prints all the elements of a list_t list
 * @head: take 'head' as argument
 * @str: take 'str' as argument
 * Return: the address of the new element,
 * or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	int length = 0;
	list_t *new;

	while (str[length])
	{
		length++;
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = length;
	new->next = (*head);
	(*head) = new;

	return (new);
}
