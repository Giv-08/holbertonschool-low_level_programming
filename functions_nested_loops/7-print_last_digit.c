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

	last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}

	return(_putchar(last_digit + '0'));

}
