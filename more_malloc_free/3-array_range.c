#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: take int 'min' as parameter
 * @max: take int 'max' as parameter
 * Return: If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int *array;
	int total;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}

	total = max - min + 1;
	array = malloc(total * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}

	while (i < total)
	{
		array[i] = min + i;
		i++;
	}

	return (array);
}
