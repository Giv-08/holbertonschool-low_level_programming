#include <stdio.h>
#include "variadic_functions.h"
#include "stdarg.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list list;

	va_start(list, n);
	
	while (i < n)
	{
		if (i == n - 1)
		{
			printf("%d", va_arg(list, int));
		}
		else if (separator == NULL)
		{
			printf("%d", va_arg(list, int));
		}
		else 
		{
			 printf("%d%s", va_arg(list, int), separator);
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
