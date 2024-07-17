#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
        va_list arg;
        va_start (arg, n);

        char *str;

        while (i < n)
        {
                str = va_arg(arg, char*);
                if (separator == NULL)
                {
                        printf("%s", str);
                }
                else if (i < n - 1)
                {
                        printf("%s", str);
                }
                else
                {
                        printf("%s%s", str, separator);
                }
                i++;
        }
        va_end(arg);
        printf("\n");
}
