#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - a pointer to a 2 dimensional array of integers
 * @width: Take int 'width' as parameter
 * @height: Take int 'height' as parameter
 * Return: return NULL on failure
*/

int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
	{
		return (NULL);
	}

	while (i < height)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			while (j < i)
			{
				free(array[j]);
				j++;
			}
			return (NULL);
			free(array);
		}
		while (j < width)
		{
			array[i][j] = 0;
			j++;
		}
		i++;
	}
	free(array);
	return (array);
}
