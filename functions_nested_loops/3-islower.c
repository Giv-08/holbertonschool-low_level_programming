#include <stdio.h>
#include "main.h"

/**
* int _islower(int c) - Checks the lowercase character
* Return: 1 if c is lowercase
* Return: 0 otherwise
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
