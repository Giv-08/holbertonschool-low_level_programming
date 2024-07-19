#include <stdio.h>
#include "variadic_functions.h"
#include "stdarg.h"

/**
 * print_char - prints characters
 * @lists: A va_list pointing to the character to print
 */

void print_char(va_list *lists)
{
	char c = va_arg(*lists, int);
	printf("%c", c);
}

/**
 * print_integer - prints integers
 * @lists: A va_list pointing to the character to print
 */

void print_integer(va_list *lists)
{
	int i = va_arg(*lists, int);
	printf("%d", i);
}

/**
 * print_float - prints floats
 * @lists: A va_list pointing to the character to print
 */

void print_float(va_list *lists)
{
	float f = (float)va_arg(*lists, double);
	printf("%f", f);
}

/**
 * print_str - prints strings
 * @lists: A va_list pointing to the character to print
 */

void print_str(va_list *lists)
{
	char *str = va_arg(*lists, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
		printf("%s", str);
}

/**
 * print_all - prints anything, followed by a new line
 * @format: take any format as parameter
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

	while (format[i] != '\0')
	{
		j = 0;
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
