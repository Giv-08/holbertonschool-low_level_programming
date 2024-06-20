#include <stdio.h>
#include "main.h"

/**
* print_to_98 - Prints all natural numbers from 'n' to 98,
* followed by a new line
* @n: is an interger taken as a parameter
* Return: Always returns 0 (success)
*/

void print_number(int n)
{
	if (n < 0)
	{
 		_putchar('-');
		n = -n;
    }

	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			print_number(i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			print_number(i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}

