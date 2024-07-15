#include <stdio.h>
#include "function_pointers.h"

/**
 * array_ierator - executes a function given
 * as a parameter on each element of an array
 * @array: name of the person
 * @size: size of array
 * @action: pointer function
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
