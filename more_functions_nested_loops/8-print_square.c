#include <stdio.h>
#include "main.h"

/**
* print_square - Prints a square
* followed by a new line
* @size: Represent "#"
*/

void print_square(int size)
{
	int count = 0;
	int i = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (count = 0; count < size; count++)
		{
			for (i = 0; i < count; i++)
			{
				_putchar('#');
			}

		_putchar('\n');

		}
	}
}
