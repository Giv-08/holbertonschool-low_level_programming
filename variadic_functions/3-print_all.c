#include <stdio.h>
#include "variadic_functions.h"
#include "stdarg.h"

void print_char(va_list *list)
{
	printf("%c", va_arg(*list, int));
}
void print_integer(va_list *list)
{
	printf("%d", va_arg(*list, int));
}
void print_float(va_list *list)
{
	printf("%f", va_arg(*list, double));
}
void print_str(va_list *list)
{
	char *data_type = va_arg(*list, char *);

	if (data_type == NULL)
	{
		printf("(nil)");
	}
		printf("%s", data_type);
}

/**
 * print_all - prints anything, followed by a new line
 * @format: take any format as parameter
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

	while (format[i] != '\0')
	{
		while (fmt[j].data_type == format[i])
		{
			separator = ", ";
			printf("%s", separator);
			fmt[j].print(&lists);
			break;
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(lists);
}
