#include <stdio.h>
#include "main.h"

/**
* print_number - Prints an integer
* @n: Take 'n' as parameter
*/

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		n *= n - 1;
		num = n;
		_putchar(45);
	}

	num /= 10;
	if (num != 0)
	{
		print_number(num);
	}
	_putchar((unsigned int)n % 10 + '0');
}
