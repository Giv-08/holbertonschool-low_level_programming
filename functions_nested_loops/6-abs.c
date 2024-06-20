#include <stdio.h>
#include "main.h"

/**
* _abs - Print the absolute value of 'n'
* @n: The integer to check
* Return: Always returns 0 (Success).
*/

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
