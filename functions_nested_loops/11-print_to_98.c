#include <stdio.h>
#include "main.h"

/**
* print_to_98 - Prints all natural numbers from 'n' to 98,
* followed by a new line
* @n: is an interger taken as a parameter
* Return: Always returns 0 (success)
*/
void print_to_98(int n)
{

	if (n < 98)
	{
		while (n < 98)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			n++;
			_putchar(98);
		}
	}
	else if (n == 98)
	{
		_putchar(n + '0');
	}
	else
	{
		while (n > 98)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			n--;
			_putchar(98);
		}
	}
}

