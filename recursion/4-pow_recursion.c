#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - check the code
 * @x: Take int 'x' as parameter
 * @n: Take int 'n' as parameter
 * Return: -1 if y < 0i
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	
	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}


