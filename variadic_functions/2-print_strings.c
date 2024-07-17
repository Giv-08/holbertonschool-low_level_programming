#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list arg;
	char *str;

	va_start(arg, n);

	while (i < n)
	{
		str = va_arg(arg, char*);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(arg);
	printf("\n");
}
