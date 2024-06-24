#include <stdio.h>
#include "main.h"

/**
* print_line - Draws a straight line in the terminal
* followed by a new line
* @n: Take as an input of integer
*/

void print_line(int n)
{
	int count = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (count < n)
		{
			_putchar('_');
			count++;
		}
		_putchar('\n');
	}
}
