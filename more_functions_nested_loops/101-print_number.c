#include <stdio.h>
#include "main.h"

/**
* print_number - Prints an integer
* @n: Take 'n' as parameter
*/

void print_number(int n)
{
	unsigned int d = n;

	if (n < 0)
	{
		_putchar(45);
		d = -d;
	}

	if (d / 10)
	{
		print_number(d / 10);
	}

	_putchar(d % 10 + '0');
}
