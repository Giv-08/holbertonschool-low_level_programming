#include "main.h"
#include <stdio.h>

/**
 * sqrt_recursion - custom sqrt function
 * @num: Take int 'num' as parameter
 * @root : Take int 'root' as parameter
 * Return:  -1 if n does not have a natural square root
*/

int sqrt_function (int num, int root)
{
	if ((root * root) > num)
	{
		return (-1);
	}
	else if ((root * root) == num)
	{
		return (root);
	}
	else
	{
		return (sqrt_function(num, root + 1));
	}	
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: Take int 'n' as parameter (number)
 * Return:  -1 if n does not have a natural square root
*/

int _sqrt_recursion(int n)
{
	

	if (n < 0)
	{
		return (-1);
	}	
	else
	{
		return(sqrt_function(n, 0));
	}
}
