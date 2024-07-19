#include <stdio.h>
#include "variadic_functions.h"
#include "stdarg.h"

void print_char(va_list *lists)
{
	printf("%c", va_arg(*lists, int));
}
void print_integer(va_list *lists)
{
	printf("%d", va_arg(*lists, int));
}
void print_float(va_list *lists)
{
	printf("%f", va_arg(*lists, double));
}
void print_str(va_list *lists)
{
	char *data_type = va_arg(*lists, char *);

	if (data_type == NULL)
	{
                printf("(nil)");
        }
                printf("%s", data_type);
}

/**i
 * print_all - prints anything, followed by a new line
 * @format: take any format as a parameter
 * Return: Always 0.
 */

void print_all(const char * const format, ...)
{
        int i = 0, j;
        char *separator;

        fm fmt[] = {
        {'c', print_char},
        {'i', print_integer},
        {'f', print_float},
        {'s', print_str},
        {'\0', NULL}
        };

        va_list lists;

        va_start(lists, format);

        while (format[i] && format)
        {
		j = 0;
                while (fmt[j].data_type)
                {
			printf("%s", separator);
			fmt[j].print(&lists);
			separator = ", ";
			break;
			j++;
                }
                i++;
        }
        printf("\n");
        va_end(lists);
}
