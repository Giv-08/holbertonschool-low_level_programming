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
	int i = 0, j;
	int **array_pointer = NULL;

	if (height > 0 && width > 0)
	{
		array_pointer = malloc(height * sizeof(int *));
		if (array_pointer != NULL)
		{
			while (i < height)
			{
				array_pointer[i] = malloc(width * sizeof(int));
				if (array_pointer[i] == NULL)
				{
					while (i > 0)
					{
						free(array_pointer[--i]);
					}
					free(array_pointer);
					return (NULL);
				}
					for (j = 0; j < width; j++)
					{
						array_pointer[i][j] = 0;
					}
				i++;
			}
		}
	}
	return (array_pointer);
}
