#include <stdio.h>
#include "main.h"

/**
* print_times_table - Prints the n times table, starting with 0
* if n is greater than 15 or less than 0 the function should not print anything
* followed by a new line
* @n: is an interger taken as a parameter
* Return: Always returns 0 (success)
*/

void print_times_table(int n)
{
	int a, b, cal;

	if (n == 0 || n > 15)
	{
		return;
	}

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			cal = a * b;

		if (b != 0)
		{
			_putchar(',');
			_putchar(' ');

		if (cal < 10)
			_putchar(' '), putchar(' ');
		else if (cal < 100)
			_putchar(' ');
		}

		if (cal >= 100)
			_putchar((cal / 100) + '0');
		if (cal >= 10)
			_putchar(((cal / 10) % 10) + '0');
		_putchar((cal % 10) + '0');
		}
	_putchar('\n');
	}
}
