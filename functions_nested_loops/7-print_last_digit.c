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
	n = n % 10;

	return (_putchar(n));
}
