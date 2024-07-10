#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: take int 'nmemb' as parameter
 * @size: take int 'size' as parameter
 * Return: return NULL if fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i = 0;
	unsigned int total;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total = nmemb * size;
	array = malloc(total);

	if (array == NULL)
	{
		return (NULL);
	}

	while (i < total)
	{
		array[i] = 0;
		i++;
	}
	return (array);
}
