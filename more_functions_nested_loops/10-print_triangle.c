#include <stdio.h>
#include "main.h"

/**
* print_triangle - Prints a triangle
* followed by a new line
* @size: Represent "#"
*/

void print_triangle(int size)
{
	int count;
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{

		for (count = 0; count < size; count++)
		{	
			for (i = 0; i < size; i++)
			{
				for (j = 0; j < size; j++)
				{
					_putchar('#');
				}
				_putchar(' ');
			}
			_putchar('\n');
		}
	}

}
