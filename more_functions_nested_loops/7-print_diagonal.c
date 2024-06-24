#include <stdio.h>
#include "main.h"

/**
* print_diagonal - Draws a diagonal line on the terminal
* followed by a new line
* @n: Take as an input of integer
*/

void print_diagonal(int n)
{
	int count = 0;
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (count < n)
		{
			for (i = 0; i < count; i++) 
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			count++;
			count++;
		}
	}
}
