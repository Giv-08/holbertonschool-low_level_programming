#include <stdio.h>
#include "variadic_functions.h"
#include "stdarg.h"

/**
 * print_char - prints char
 * @lists: take lists as arguments
 */

void print_char(va_list *lists)
{
	printf("%c", va_arg(*lists, int));
}

/**
 * print_integer - prints integer
 * @lists: take lists as arguments
 */

void print_integer(va_list *lists)
{
	printf("%d", va_arg(*lists, int));
}

/**
 * print_float - prints float numbers
 * @lists: take lists as arguments
 */

void print_float(va_list *lists)
{
	printf("%f", va_arg(*lists, double));
}

/**
 * print_str - prints strings
 * @lists: take lists as arguments
 */

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
 */

void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *separator = "";

	fm fmt[] = {
	{'c', print_char},
	{'i', print_integer},
	{'f', print_float},
	{'s', print_str},
	{0, NULL}
	};

	va_list lists;

	va_start(lists, format);

	while (format != NULL && format[i] != '\0')
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
