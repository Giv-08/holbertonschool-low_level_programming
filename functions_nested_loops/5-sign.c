#include <stdio.h>
#include "main.h"

/**
* print_sign - Checks if 'n' is greater, less than 0 or it is 0
* @n: The character to check
* Return: 1 and print '+' if it is greater than 0
* -1 and prints '-'if it is less than 0
* otherwise 0 and print '0' if it is 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
