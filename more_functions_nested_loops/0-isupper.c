#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* _isupper - Checks if 'c' is an uppercase character
* @c: The character to check
* Return: 1 if c is uppercase, 0 otherwise
*/

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
