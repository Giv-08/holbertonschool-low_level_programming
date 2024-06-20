#include <stdio.h>
#include "main.h"

/**
* print_last_digit - Print the last digit of 'n'
* @n: The integer to check
* Description: calculate last digit using % and
* Return: value of last digit
*/

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		n = -n;
	}

	last_digit = n % 10;

	return (_putchar(last_digit + '0'));
}
