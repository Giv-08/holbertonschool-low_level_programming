#include <stdio.h>
#include "function_pointers.h"

/**
 * ibt_index - searches for an integer
 * @array: take int 'array' as parameter
 * @size: take int 'size' as paramter
 * Return: If no element matches, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, count = 0;

	if (size <= 0 || array == 0 )
	{
		return (-1);
	}

	while (i < size)
	{
		if (cmp(array[i]))
		{
			count++;
		}
		i++;
	}
	return (count);
}
