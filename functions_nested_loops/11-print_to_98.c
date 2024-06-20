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
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(i + '0');
			if (i != 98)
			{
				_putchar(',');
				putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			_putchar(i + '0');
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}

