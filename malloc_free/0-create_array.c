#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and
 * initializes it with a specific char
 * @c: Take char 'c' as parameter
 * @size: Take int 'size' as parameter
 * Return: NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *array = (char *)malloc(size * sizeof(char));
	unsigned int i = 0;

	if (array == 0)
	{
		return (NULL);
	}

	{
		while (i < size)
		{
			array[i] = c;
			i++;
		}
	}
	return (array);
}
