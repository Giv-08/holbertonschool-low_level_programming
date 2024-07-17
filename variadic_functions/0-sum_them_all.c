#include <stdio.h>
#include "variadic_functions.h"
#include "stdarg.h"

/**
 * sum_them_all - sum all numbers in argument
 * @n: take int 'n' as parameter
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i = 0;

	va_list list;
	va_start(list, n);

	if (n == 0)
	{
		return (0);
	}

	while (i < n)
	{
		sum = sum + va_arg(list , int);
		i++;
	}

	va_end(list);
	return (sum);
}
