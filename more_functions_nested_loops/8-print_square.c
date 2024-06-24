#include <stdio.h>
#include "main.h"

/**
* print_diagonal - Prints a square
* followed by a new line
* @size: Represent "#"
*/

void print_square(int size)
{
	int count = 0;
	int i = 0;
	char size = "#";
	
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (count < size)
		{
			for (i = 0; i < count; i++)
			{
				_putchar(' ');
			}

		_putchar('\n');
		count++;

		}
	}
}
