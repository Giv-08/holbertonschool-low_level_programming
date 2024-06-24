#include <stdio.h>
#include "main.h"

/**
* print_line - Draws a straight line in the terminal
* followed by a new line
* @n: Take as an input of integer
*/

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar(('\n');
	}
	else
	{
		for (int i = 0; i < n; i++ )
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
