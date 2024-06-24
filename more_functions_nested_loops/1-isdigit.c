#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* _isdigit - Checks if 'c' is a digit (0 through 9)
* @c: The character to check
* Return: 1 if c is uppercase, 0 otherwise
*/

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
