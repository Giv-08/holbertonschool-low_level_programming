#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_list - frees a list_t list
 * @head: take 'head' as argument
 * Return: nothing
 */

void free_list(list_t *head)
{
	free(head);
}
