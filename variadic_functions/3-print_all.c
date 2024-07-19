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
	char *str = va_arg(*lists, char *);

	if (str == NULL)
	{
		printf("(nil)");
	}
	printf("%s", str);
}

/**
 * print_all - prints anything, followed by a new line
 * @format: take any format as a parameter
 * Return: Always 0.
 */

void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
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
			if (fmt[j].data_type == format[i])
			{
				printf("%s", separator);
				fmt[j].print(&lists);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(lists);
}
